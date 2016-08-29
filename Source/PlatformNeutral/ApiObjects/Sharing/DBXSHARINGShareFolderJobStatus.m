///
/// Auto-generated by Stone, do not modify.
///

#import "DBXASYNCPollResultBase.h"
#import "DBXSHARINGShareFolderError.h"
#import "DBXSHARINGShareFolderJobStatus.h"
#import "DBXSHARINGSharedFolderMetadata.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGShareFolderJobStatus 

@synthesize complete = _complete;
@synthesize failed = _failed;

- (instancetype)initWithInProgress {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGShareFolderJobStatusInProgress;
    }
    return self;
}

- (instancetype)initWithComplete:(DBXSHARINGSharedFolderMetadata *)complete {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGShareFolderJobStatusComplete;
        _complete = complete;
    }
    return self;
}

- (instancetype)initWithFailed:(DBXSHARINGShareFolderError *)failed {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGShareFolderJobStatusFailed;
        _failed = failed;
    }
    return self;
}

- (BOOL)isInProgress {
    return _tag == DBXSHARINGShareFolderJobStatusInProgress;
}

- (BOOL)isComplete {
    return _tag == DBXSHARINGShareFolderJobStatusComplete;
}

- (BOOL)isFailed {
    return _tag == DBXSHARINGShareFolderJobStatusFailed;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGShareFolderJobStatusInProgress:
           return @"DBXSHARINGShareFolderJobStatusInProgress";
        case DBXSHARINGShareFolderJobStatusComplete:
           return @"DBXSHARINGShareFolderJobStatusComplete";
        case DBXSHARINGShareFolderJobStatusFailed:
           return @"DBXSHARINGShareFolderJobStatusFailed";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGSharedFolderMetadata *)complete {
    if (![self isComplete]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGShareFolderJobStatusComplete`, but was %@.", [self getTagName]];
    }
    return _complete;
}

- (DBXSHARINGShareFolderError *)failed {
    if (![self isFailed]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGShareFolderJobStatusFailed`, but was %@.", [self getTagName]];
    }
    return _failed;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGShareFolderJobStatusSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGShareFolderJobStatusSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGShareFolderJobStatusSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGShareFolderJobStatusSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGShareFolderJobStatus *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isInProgress]) {
        jsonDict[@".tag"] = @"in_progress";
    }
    else if ([valueObj isComplete]) {
        jsonDict = [[DBXSHARINGSharedFolderMetadataSerializer serialize:valueObj.complete] mutableCopy];
        jsonDict[@".tag"] = @"complete";
    }
    else if ([valueObj isFailed]) {
        jsonDict = [[DBXSHARINGShareFolderErrorSerializer serialize:valueObj.failed] mutableCopy];
        jsonDict[@".tag"] = @"failed";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGShareFolderJobStatus *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"in_progress"]) {
        return [[DBXSHARINGShareFolderJobStatus alloc] initWithInProgress];
    }
    else if ([tag isEqualToString:@"complete"]) {
        DBXSHARINGSharedFolderMetadata *complete = [DBXSHARINGSharedFolderMetadataSerializer deserialize:valueDict];
        return [[DBXSHARINGShareFolderJobStatus alloc] initWithComplete:complete];
    }
    else if ([tag isEqualToString:@"failed"]) {
        DBXSHARINGShareFolderError *failed = [DBXSHARINGShareFolderErrorSerializer deserialize:valueDict[@"failed"]];
        return [[DBXSHARINGShareFolderJobStatus alloc] initWithFailed:failed];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
