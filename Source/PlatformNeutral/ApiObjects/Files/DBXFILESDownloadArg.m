///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESDownloadArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESDownloadArg 

- (instancetype)initWithPath:(NSString *)path rev:(NSString *)rev {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"(/(.|[\\r\\n])*|id:.*)|(rev:[0-9a-f]{9,})|(ns:[0-9]+(/.*)?)"](path);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:@(9) maxLength:nil pattern:@"[0-9a-f]+"]](rev);

    self = [super init];
    if (self) {
        _path = path;
        _rev = rev;
    }
    return self;
}

- (instancetype)initWithPath:(NSString *)path {
    return [self initWithPath:path rev:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESDownloadArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESDownloadArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESDownloadArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESDownloadArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESDownloadArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    if (valueObj.rev) {
        jsonDict[@"rev"] = valueObj.rev;
    }

    return jsonDict;
}

+ (DBXFILESDownloadArg *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    NSString *rev = valueDict[@"rev"] ?: nil;

    return [[DBXFILESDownloadArg alloc] initWithPath:path rev:rev];
}

@end
