///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMListMemberAppsArg.h"

@implementation DBXTEAMListMemberAppsArg 

- (instancetype)initWithTeamMemberId:(NSString *)teamMemberId {

    self = [super init];
    if (self) {
        _teamMemberId = teamMemberId;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMListMemberAppsArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMListMemberAppsArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMListMemberAppsArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMListMemberAppsArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMListMemberAppsArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"team_member_id"] = valueObj.teamMemberId;

    return jsonDict;
}

+ (DBXTEAMListMemberAppsArg *)deserialize:(NSDictionary *)valueDict {
    NSString *teamMemberId = valueDict[@"team_member_id"];

    return [[DBXTEAMListMemberAppsArg alloc] initWithTeamMemberId:teamMemberId];
}

@end
