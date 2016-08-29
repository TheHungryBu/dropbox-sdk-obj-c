///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGPermissionDeniedReason.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGPermissionDeniedReason 

- (instancetype)initWithUserNotSameTeamAsOwner {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonUserNotSameTeamAsOwner;
    }
    return self;
}

- (instancetype)initWithUserNotAllowedByOwner {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonUserNotAllowedByOwner;
    }
    return self;
}

- (instancetype)initWithTargetIsIndirectMember {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonTargetIsIndirectMember;
    }
    return self;
}

- (instancetype)initWithTargetIsOwner {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonTargetIsOwner;
    }
    return self;
}

- (instancetype)initWithTargetIsSelf {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonTargetIsSelf;
    }
    return self;
}

- (instancetype)initWithTargetNotActive {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonTargetNotActive;
    }
    return self;
}

- (instancetype)initWithFolderIsLimitedTeamFolder {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonFolderIsLimitedTeamFolder;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPermissionDeniedReasonOther;
    }
    return self;
}

- (BOOL)isUserNotSameTeamAsOwner {
    return _tag == DBXSHARINGPermissionDeniedReasonUserNotSameTeamAsOwner;
}

- (BOOL)isUserNotAllowedByOwner {
    return _tag == DBXSHARINGPermissionDeniedReasonUserNotAllowedByOwner;
}

- (BOOL)isTargetIsIndirectMember {
    return _tag == DBXSHARINGPermissionDeniedReasonTargetIsIndirectMember;
}

- (BOOL)isTargetIsOwner {
    return _tag == DBXSHARINGPermissionDeniedReasonTargetIsOwner;
}

- (BOOL)isTargetIsSelf {
    return _tag == DBXSHARINGPermissionDeniedReasonTargetIsSelf;
}

- (BOOL)isTargetNotActive {
    return _tag == DBXSHARINGPermissionDeniedReasonTargetNotActive;
}

- (BOOL)isFolderIsLimitedTeamFolder {
    return _tag == DBXSHARINGPermissionDeniedReasonFolderIsLimitedTeamFolder;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGPermissionDeniedReasonOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGPermissionDeniedReasonUserNotSameTeamAsOwner:
           return @"DBXSHARINGPermissionDeniedReasonUserNotSameTeamAsOwner";
        case DBXSHARINGPermissionDeniedReasonUserNotAllowedByOwner:
           return @"DBXSHARINGPermissionDeniedReasonUserNotAllowedByOwner";
        case DBXSHARINGPermissionDeniedReasonTargetIsIndirectMember:
           return @"DBXSHARINGPermissionDeniedReasonTargetIsIndirectMember";
        case DBXSHARINGPermissionDeniedReasonTargetIsOwner:
           return @"DBXSHARINGPermissionDeniedReasonTargetIsOwner";
        case DBXSHARINGPermissionDeniedReasonTargetIsSelf:
           return @"DBXSHARINGPermissionDeniedReasonTargetIsSelf";
        case DBXSHARINGPermissionDeniedReasonTargetNotActive:
           return @"DBXSHARINGPermissionDeniedReasonTargetNotActive";
        case DBXSHARINGPermissionDeniedReasonFolderIsLimitedTeamFolder:
           return @"DBXSHARINGPermissionDeniedReasonFolderIsLimitedTeamFolder";
        case DBXSHARINGPermissionDeniedReasonOther:
           return @"DBXSHARINGPermissionDeniedReasonOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGPermissionDeniedReasonSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGPermissionDeniedReasonSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGPermissionDeniedReasonSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGPermissionDeniedReasonSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGPermissionDeniedReason *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUserNotSameTeamAsOwner]) {
        jsonDict[@".tag"] = @"user_not_same_team_as_owner";
    }
    else if ([valueObj isUserNotAllowedByOwner]) {
        jsonDict[@".tag"] = @"user_not_allowed_by_owner";
    }
    else if ([valueObj isTargetIsIndirectMember]) {
        jsonDict[@".tag"] = @"target_is_indirect_member";
    }
    else if ([valueObj isTargetIsOwner]) {
        jsonDict[@".tag"] = @"target_is_owner";
    }
    else if ([valueObj isTargetIsSelf]) {
        jsonDict[@".tag"] = @"target_is_self";
    }
    else if ([valueObj isTargetNotActive]) {
        jsonDict[@".tag"] = @"target_not_active";
    }
    else if ([valueObj isFolderIsLimitedTeamFolder]) {
        jsonDict[@".tag"] = @"folder_is_limited_team_folder";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGPermissionDeniedReason *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"user_not_same_team_as_owner"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithUserNotSameTeamAsOwner];
    }
    else if ([tag isEqualToString:@"user_not_allowed_by_owner"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithUserNotAllowedByOwner];
    }
    else if ([tag isEqualToString:@"target_is_indirect_member"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithTargetIsIndirectMember];
    }
    else if ([tag isEqualToString:@"target_is_owner"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithTargetIsOwner];
    }
    else if ([tag isEqualToString:@"target_is_self"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithTargetIsSelf];
    }
    else if ([tag isEqualToString:@"target_not_active"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithTargetNotActive];
    }
    else if ([tag isEqualToString:@"folder_is_limited_team_folder"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithFolderIsLimitedTeamFolder];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGPermissionDeniedReason alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
