///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupMembersRemoveError.h"
#import "DBXTEAMGroupMembersSelectorError.h"

@implementation DBXTEAMGroupMembersRemoveError 

- (instancetype)initWithGroupNotFound {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupMembersRemoveErrorGroupNotFound;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupMembersRemoveErrorOther;
    }
    return self;
}

- (instancetype)initWithMemberNotInGroup {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupMembersRemoveErrorMemberNotInGroup;
    }
    return self;
}

- (instancetype)initWithGroupNotInTeam {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupMembersRemoveErrorGroupNotInTeam;
    }
    return self;
}

- (BOOL)isGroupNotFound {
    return _tag == DBXTEAMGroupMembersRemoveErrorGroupNotFound;
}

- (BOOL)isOther {
    return _tag == DBXTEAMGroupMembersRemoveErrorOther;
}

- (BOOL)isMemberNotInGroup {
    return _tag == DBXTEAMGroupMembersRemoveErrorMemberNotInGroup;
}

- (BOOL)isGroupNotInTeam {
    return _tag == DBXTEAMGroupMembersRemoveErrorGroupNotInTeam;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMGroupMembersRemoveErrorGroupNotFound:
           return @"DBXTEAMGroupMembersRemoveErrorGroupNotFound";
        case DBXTEAMGroupMembersRemoveErrorOther:
           return @"DBXTEAMGroupMembersRemoveErrorOther";
        case DBXTEAMGroupMembersRemoveErrorMemberNotInGroup:
           return @"DBXTEAMGroupMembersRemoveErrorMemberNotInGroup";
        case DBXTEAMGroupMembersRemoveErrorGroupNotInTeam:
           return @"DBXTEAMGroupMembersRemoveErrorGroupNotInTeam";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupMembersRemoveErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupMembersRemoveErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupMembersRemoveErrorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupMembersRemoveErrorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupMembersRemoveError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isGroupNotFound]) {
        jsonDict[@".tag"] = @"group_not_found";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else if ([valueObj isMemberNotInGroup]) {
        jsonDict[@".tag"] = @"member_not_in_group";
    }
    else if ([valueObj isGroupNotInTeam]) {
        jsonDict[@".tag"] = @"group_not_in_team";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMGroupMembersRemoveError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"group_not_found"]) {
        return [[DBXTEAMGroupMembersRemoveError alloc] initWithGroupNotFound];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXTEAMGroupMembersRemoveError alloc] initWithOther];
    }
    else if ([tag isEqualToString:@"member_not_in_group"]) {
        return [[DBXTEAMGroupMembersRemoveError alloc] initWithMemberNotInGroup];
    }
    else if ([tag isEqualToString:@"group_not_in_team"]) {
        return [[DBXTEAMGroupMembersRemoveError alloc] initWithGroupNotInTeam];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
