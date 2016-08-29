///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGGetSharedLinkMetadataArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGGetSharedLinkMetadataArg 

- (instancetype)initWithUrl:(NSString *)url path:(NSString *)path linkPassword:(NSString *)linkPassword {
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"/(.|[\\r\\n])*"]](path);

    self = [super init];
    if (self) {
        _url = url;
        _path = path;
        _linkPassword = linkPassword;
    }
    return self;
}

- (instancetype)initWithUrl:(NSString *)url {
    return [self initWithUrl:url path:nil linkPassword:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGGetSharedLinkMetadataArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGGetSharedLinkMetadataArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGGetSharedLinkMetadataArgSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGGetSharedLinkMetadataArgSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGGetSharedLinkMetadataArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"url"] = valueObj.url;
    if (valueObj.path) {
        jsonDict[@"path"] = valueObj.path;
    }
    if (valueObj.linkPassword) {
        jsonDict[@"link_password"] = valueObj.linkPassword;
    }

    return jsonDict;
}

+ (DBXSHARINGGetSharedLinkMetadataArg *)deserialize:(NSDictionary *)valueDict {
    NSString *url = valueDict[@"url"];
    NSString *path = valueDict[@"path"] ?: nil;
    NSString *linkPassword = valueDict[@"link_password"] ?: nil;

    return [[DBXSHARINGGetSharedLinkMetadataArg alloc] initWithUrl:url path:path linkPassword:linkPassword];
}

@end
