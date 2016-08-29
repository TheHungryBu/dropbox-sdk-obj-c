#import "DBXOAuth.h"
#import "DBXOAuthResult.h"
#import "DropboxClient.h"
#import "DropboxTeamClient.h"
#import "DropboxClientsManager.h"

@implementation DropboxClientsManager

/// An authorized client. This will be set to `nil` if unlinked.
static DropboxClient *authorizedClient;

/// An authorized team client. This will be set to `nil` if unlinked.
static DropboxTeamClient *authorizedTeamClient;

+ (DropboxClient *)authorizedClient {
    return authorizedClient;
}

+ (void)authorizedClient:(DropboxClient *)client {
    authorizedClient = client;
}

+ (DropboxTeamClient *)authorizedTeamClient {
    return authorizedTeamClient;
}

+ (void)authorizedTeamClient:(DropboxTeamClient *)client {
    authorizedTeamClient = client;
}

+ (void)setupWithAppKey:(NSString *)appKey sharedOAuthManager:(DBXOAuthManager *)sharedOAuthManager transportClient:(DBXTransportClient *)transportClient {
    NSAssert([DBXOAuthManager sharedOAuthManager] == nil, @"Only call `DropboxManager.setupWithAppKey` or `DropboxManager.setupWithTeamAppKey` once");
    [DBXOAuthManager sharedOAuthManager:sharedOAuthManager];
    
    DBXAccessToken *accessToken = [[DBXOAuthManager sharedOAuthManager] getFirstAccessToken];
    if (accessToken) {
        if (transportClient) {
            transportClient.accessToken = accessToken.accessToken;
            authorizedClient = [[DropboxClient alloc] initWithTransportClient:transportClient];
        } else {
            authorizedClient = [[DropboxClient alloc] initWithAccessToken:accessToken.accessToken];
        }
    } else {
        if (transportClient) {
            authorizedClient = [[DropboxClient alloc] initWithTransportClient:transportClient];
        }
    }
}

+ (void)setupWithTeamAppKey:(NSString *)appKey sharedOAuthManager:(DBXOAuthManager *)sharedOAuthManager transportClient:(DBXTransportClient *)transportClient {
    NSAssert([DBXOAuthManager sharedOAuthManager] == nil, @"Only call `DropboxManager.setupWithAppKey` or `DropboxManager.setupWithTeamAppKey` once");
    [DBXOAuthManager sharedOAuthManager:sharedOAuthManager];
    
    DBXAccessToken *accessToken = [[DBXOAuthManager sharedOAuthManager] getFirstAccessToken];
    if (accessToken) {
        if (transportClient) {
            transportClient.accessToken = accessToken.accessToken;
            authorizedTeamClient = [[DropboxTeamClient alloc] initWithTransportClient:transportClient];
        } else {
            authorizedTeamClient = [[DropboxTeamClient alloc] initWithAccessToken:accessToken.accessToken];
        }
    } else {
        if (transportClient) {
            authorizedTeamClient = [[DropboxTeamClient alloc] initWithTransportClient:transportClient];
        }
    }
}

+ (DBXOAuthResult *)handleRedirectURL:(NSURL *)url {
    NSAssert([DBXOAuthManager sharedOAuthManager] != nil, @"Call `Dropbox.setupWithAppKey` before calling this method");
    NSAssert([DropboxClientsManager authorizedClient] == nil, @"Dropbox user client is already authorized");
    
    DBXOAuthResult *result = [[DBXOAuthManager sharedOAuthManager] handleRedirectURL:url];
    
    if ([result isSuccess]) {
        if (authorizedClient) {
            authorizedClient.transportClient.accessToken = result.accessToken.accessToken;
        } else {
            [DropboxClientsManager authorizedClient:[[DropboxClient alloc] initWithAccessToken:result.accessToken.accessToken]];
        }
    } else if ([result isCancel]) {
        return result;
    } else if ([result isError]) {
        return result;
    }
    
    return result;
}

+ (DBXOAuthResult *)handleRedirectURLTeam:(NSURL *)url {
    NSAssert([DBXOAuthManager sharedOAuthManager] != nil, @"Call `Dropbox.setupWithTeamAppKey` before calling this method");
    NSAssert([DropboxClientsManager authorizedClient] == nil, @"Dropbox user client is already authorized");
    
    DBXOAuthResult *result = [[DBXOAuthManager sharedOAuthManager] handleRedirectURL:url];
    
    if ([result isSuccess]) {
        if (authorizedTeamClient) {
            authorizedTeamClient.transportClient.accessToken = result.accessToken.accessToken;
        } else {
            [DropboxClientsManager authorizedTeamClient:[[DropboxTeamClient alloc] initWithAccessToken:result.accessToken.accessToken]];
        }
    } else if ([result isCancel]) {
        return result;
    } else if ([result isError]) {
        return result;
    }
    
    return nil;
}

+ (void)unlinkClients {
    NSAssert([DBXOAuthManager sharedOAuthManager] != nil, @"Call `Dropbox.setupWithAppKey` or `Dropbox.setupWithTeamAppKey` before calling this method");
    if ([DropboxClientsManager authorizedClient] == nil && [DropboxClientsManager authorizedTeamClient] == nil) {
        // already unlinked
        return;
    }
    
    [[DBXOAuthManager sharedOAuthManager] clearStoredAccessTokens];
    [DropboxClientsManager authorizedClient:nil];
    [DropboxClientsManager authorizedTeamClient:nil];
}

@end
