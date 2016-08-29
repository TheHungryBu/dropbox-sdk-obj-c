///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGJobError.h"
#import "DBXSHARINGRelinquishFolderMembershipError.h"
#import "DBXSHARINGRemoveFolderMemberError.h"
#import "DBXSHARINGUnshareFolderError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGJobError 

@synthesize unshareFolderError = _unshareFolderError;
@synthesize removeFolderMemberError = _removeFolderMemberError;
@synthesize relinquishFolderMembershipError = _relinquishFolderMembershipError;

- (instancetype)initWithUnshareFolderError:(DBXSHARINGUnshareFolderError *)unshareFolderError {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGJobErrorUnshareFolderError;
        _unshareFolderError = unshareFolderError;
    }
    return self;
}

- (instancetype)initWithRemoveFolderMemberError:(DBXSHARINGRemoveFolderMemberError *)removeFolderMemberError {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGJobErrorRemoveFolderMemberError;
        _removeFolderMemberError = removeFolderMemberError;
    }
    return self;
}

- (instancetype)initWithRelinquishFolderMembershipError:(DBXSHARINGRelinquishFolderMembershipError *)relinquishFolderMembershipError {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGJobErrorRelinquishFolderMembershipError;
        _relinquishFolderMembershipError = relinquishFolderMembershipError;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGJobErrorOther;
    }
    return self;
}

- (BOOL)isUnshareFolderError {
    return _tag == DBXSHARINGJobErrorUnshareFolderError;
}

- (BOOL)isRemoveFolderMemberError {
    return _tag == DBXSHARINGJobErrorRemoveFolderMemberError;
}

- (BOOL)isRelinquishFolderMembershipError {
    return _tag == DBXSHARINGJobErrorRelinquishFolderMembershipError;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGJobErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGJobErrorUnshareFolderError:
           return @"DBXSHARINGJobErrorUnshareFolderError";
        case DBXSHARINGJobErrorRemoveFolderMemberError:
           return @"DBXSHARINGJobErrorRemoveFolderMemberError";
        case DBXSHARINGJobErrorRelinquishFolderMembershipError:
           return @"DBXSHARINGJobErrorRelinquishFolderMembershipError";
        case DBXSHARINGJobErrorOther:
           return @"DBXSHARINGJobErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGUnshareFolderError *)unshareFolderError {
    if (![self isUnshareFolderError]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGJobErrorUnshareFolderError`, but was %@.", [self getTagName]];
    }
    return _unshareFolderError;
}

- (DBXSHARINGRemoveFolderMemberError *)removeFolderMemberError {
    if (![self isRemoveFolderMemberError]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGJobErrorRemoveFolderMemberError`, but was %@.", [self getTagName]];
    }
    return _removeFolderMemberError;
}

- (DBXSHARINGRelinquishFolderMembershipError *)relinquishFolderMembershipError {
    if (![self isRelinquishFolderMembershipError]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGJobErrorRelinquishFolderMembershipError`, but was %@.", [self getTagName]];
    }
    return _relinquishFolderMembershipError;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGJobErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGJobErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGJobErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGJobErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGJobError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUnshareFolderError]) {
        jsonDict = [[DBXSHARINGUnshareFolderErrorSerializer serialize:valueObj.unshareFolderError] mutableCopy];
        jsonDict[@".tag"] = @"unshare_folder_error";
    }
    else if ([valueObj isRemoveFolderMemberError]) {
        jsonDict = [[DBXSHARINGRemoveFolderMemberErrorSerializer serialize:valueObj.removeFolderMemberError] mutableCopy];
        jsonDict[@".tag"] = @"remove_folder_member_error";
    }
    else if ([valueObj isRelinquishFolderMembershipError]) {
        jsonDict = [[DBXSHARINGRelinquishFolderMembershipErrorSerializer serialize:valueObj.relinquishFolderMembershipError] mutableCopy];
        jsonDict[@".tag"] = @"relinquish_folder_membership_error";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGJobError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"unshare_folder_error"]) {
        DBXSHARINGUnshareFolderError *unshareFolderError = [DBXSHARINGUnshareFolderErrorSerializer deserialize:valueDict[@"unshare_folder_error"]];
        return [[DBXSHARINGJobError alloc] initWithUnshareFolderError:unshareFolderError];
    }
    else if ([tag isEqualToString:@"remove_folder_member_error"]) {
        DBXSHARINGRemoveFolderMemberError *removeFolderMemberError = [DBXSHARINGRemoveFolderMemberErrorSerializer deserialize:valueDict[@"remove_folder_member_error"]];
        return [[DBXSHARINGJobError alloc] initWithRemoveFolderMemberError:removeFolderMemberError];
    }
    else if ([tag isEqualToString:@"relinquish_folder_membership_error"]) {
        DBXSHARINGRelinquishFolderMembershipError *relinquishFolderMembershipError = [DBXSHARINGRelinquishFolderMembershipErrorSerializer deserialize:valueDict[@"relinquish_folder_membership_error"]];
        return [[DBXSHARINGJobError alloc] initWithRelinquishFolderMembershipError:relinquishFolderMembershipError];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGJobError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
