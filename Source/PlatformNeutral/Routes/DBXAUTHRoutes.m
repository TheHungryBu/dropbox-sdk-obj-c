///
/// Auto-generated by Stone, do not modify.
///

#import "DBXAUTHRoutes.h"

@implementation DBXAUTHRoutes 

- (instancetype)init:(DBXTransportClient *)client {
    self = [super init];
    if (self) {
        _client = client;
    }
    return self;
}
- (DBXRpcTask *)tokenRevoke {
    DBXRoute *route = DBXAUTHRouteObjects.DBXAUTHTokenRevoke;
    return [self.client requestRpc:route arg:nil];
}

@end
