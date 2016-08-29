///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESLookupError.h"
#import "DBXFILESRestoreError.h"
#import "DBXFILESWriteError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESRestoreError 

@synthesize pathLookup = _pathLookup;
@synthesize pathWrite = _pathWrite;

- (instancetype)initWithPathLookup:(DBXFILESLookupError *)pathLookup {
    self = [super init];
    if (self) {
        _tag = DBXFILESRestoreErrorPathLookup;
        _pathLookup = pathLookup;
    }
    return self;
}

- (instancetype)initWithPathWrite:(DBXFILESWriteError *)pathWrite {
    self = [super init];
    if (self) {
        _tag = DBXFILESRestoreErrorPathWrite;
        _pathWrite = pathWrite;
    }
    return self;
}

- (instancetype)initWithInvalidRevision {
    self = [super init];
    if (self) {
        _tag = DBXFILESRestoreErrorInvalidRevision;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXFILESRestoreErrorOther;
    }
    return self;
}

- (BOOL)isPathLookup {
    return _tag == DBXFILESRestoreErrorPathLookup;
}

- (BOOL)isPathWrite {
    return _tag == DBXFILESRestoreErrorPathWrite;
}

- (BOOL)isInvalidRevision {
    return _tag == DBXFILESRestoreErrorInvalidRevision;
}

- (BOOL)isOther {
    return _tag == DBXFILESRestoreErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESRestoreErrorPathLookup:
           return @"DBXFILESRestoreErrorPathLookup";
        case DBXFILESRestoreErrorPathWrite:
           return @"DBXFILESRestoreErrorPathWrite";
        case DBXFILESRestoreErrorInvalidRevision:
           return @"DBXFILESRestoreErrorInvalidRevision";
        case DBXFILESRestoreErrorOther:
           return @"DBXFILESRestoreErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)pathLookup {
    if (![self isPathLookup]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESRestoreErrorPathLookup`, but was %@.", [self getTagName]];
    }
    return _pathLookup;
}

- (DBXFILESWriteError *)pathWrite {
    if (![self isPathWrite]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESRestoreErrorPathWrite`, but was %@.", [self getTagName]];
    }
    return _pathWrite;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESRestoreErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESRestoreErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESRestoreErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESRestoreErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESRestoreError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPathLookup]) {
        jsonDict = [[DBXFILESLookupErrorSerializer serialize:valueObj.pathLookup] mutableCopy];
        jsonDict[@".tag"] = @"path_lookup";
    }
    else if ([valueObj isPathWrite]) {
        jsonDict = [[DBXFILESWriteErrorSerializer serialize:valueObj.pathWrite] mutableCopy];
        jsonDict[@".tag"] = @"path_write";
    }
    else if ([valueObj isInvalidRevision]) {
        jsonDict[@".tag"] = @"invalid_revision";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESRestoreError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path_lookup"]) {
        DBXFILESLookupError *pathLookup = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path_lookup"]];
        return [[DBXFILESRestoreError alloc] initWithPathLookup:pathLookup];
    }
    else if ([tag isEqualToString:@"path_write"]) {
        DBXFILESWriteError *pathWrite = [DBXFILESWriteErrorSerializer deserialize:valueDict[@"path_write"]];
        return [[DBXFILESRestoreError alloc] initWithPathWrite:pathWrite];
    }
    else if ([tag isEqualToString:@"invalid_revision"]) {
        return [[DBXFILESRestoreError alloc] initWithInvalidRevision];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESRestoreError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
