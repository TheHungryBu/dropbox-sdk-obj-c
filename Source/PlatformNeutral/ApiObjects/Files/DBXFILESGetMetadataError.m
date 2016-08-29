///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESGetMetadataError.h"
#import "DBXFILESLookupError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESGetMetadataError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self) {
        _tag = DBXFILESGetMetadataErrorPath;
        _path = path;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESGetMetadataErrorPath;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESGetMetadataErrorPath:
           return @"DBXFILESGetMetadataErrorPath";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (![self isPath]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESGetMetadataErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESGetMetadataErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESGetMetadataErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESGetMetadataErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESGetMetadataErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESGetMetadataError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESLookupErrorSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESGetMetadataError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESGetMetadataError alloc] initWithPath:path];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
