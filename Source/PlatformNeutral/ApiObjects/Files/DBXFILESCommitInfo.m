///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESCommitInfo.h"
#import "DBXFILESWriteMode.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESCommitInfo 

- (instancetype)initWithPath:(NSString *)path mode:(DBXFILESWriteMode *)mode autorename:(NSNumber *)autorename clientModified:(NSDate *)clientModified mute:(NSNumber *)mute {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"(/(.|[\\r\\n])*)|(ns:[0-9]+(/.*)?)"](path);

    self = [super init];
    if (self) {
        _path = path;
        _mode = mode ?: [[DBXFILESWriteMode alloc] initWithAdd];
        _autorename = autorename ?: @NO;
        _clientModified = clientModified;
        _mute = mute ?: @NO;
    }
    return self;
}

- (instancetype)initWithPath:(NSString *)path {
    return [self initWithPath:path mode:nil autorename:nil clientModified:nil mute:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESCommitInfoSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESCommitInfoSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESCommitInfoSerializer serialize:self] description];
}

@end


@implementation DBXFILESCommitInfoSerializer 

+ (NSDictionary *)serialize:(DBXFILESCommitInfo *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    jsonDict[@"mode"] = [DBXFILESWriteModeSerializer serialize:valueObj.mode];
    jsonDict[@"autorename"] = valueObj.autorename;
    if (valueObj.clientModified) {
        jsonDict[@"client_modified"] = [DBXNSDateSerializer serialize:valueObj.clientModified dateFormat:@"%Y-%m-%dT%H:%M:%SZ"];
    }
    jsonDict[@"mute"] = valueObj.mute;

    return jsonDict;
}

+ (DBXFILESCommitInfo *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    DBXFILESWriteMode *mode = [DBXFILESWriteModeSerializer deserialize:valueDict[@"mode"]];
    NSNumber *autorename = valueDict[@"autorename"];
    NSDate *clientModified = valueDict[@"client_modified"] ? [DBXNSDateSerializer deserialize:valueDict[@"client_modified"] dateFormat:@"%Y-%m-%dT%H:%M:%SZ"] : nil;
    NSNumber *mute = valueDict[@"mute"];

    return [[DBXFILESCommitInfo alloc] initWithPath:path mode:mode autorename:autorename clientModified:clientModified mute:mute];
}

@end
