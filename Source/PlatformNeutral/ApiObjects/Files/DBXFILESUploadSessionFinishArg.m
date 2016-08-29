///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESCommitInfo.h"
#import "DBXFILESUploadSessionCursor.h"
#import "DBXFILESUploadSessionFinishArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESUploadSessionFinishArg 

- (instancetype)initWithCursor:(DBXFILESUploadSessionCursor *)cursor commit:(DBXFILESCommitInfo *)commit {

    self = [super init];
    if (self) {
        _cursor = cursor;
        _commit = commit;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESUploadSessionFinishArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESUploadSessionFinishArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESUploadSessionFinishArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESUploadSessionFinishArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESUploadSessionFinishArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"cursor"] = [DBXFILESUploadSessionCursorSerializer serialize:valueObj.cursor];
    jsonDict[@"commit"] = [DBXFILESCommitInfoSerializer serialize:valueObj.commit];

    return jsonDict;
}

+ (DBXFILESUploadSessionFinishArg *)deserialize:(NSDictionary *)valueDict {
    DBXFILESUploadSessionCursor *cursor = [DBXFILESUploadSessionCursorSerializer deserialize:valueDict[@"cursor"]];
    DBXFILESCommitInfo *commit = [DBXFILESCommitInfoSerializer deserialize:valueDict[@"commit"]];

    return [[DBXFILESUploadSessionFinishArg alloc] initWithCursor:cursor commit:commit];
}

@end
