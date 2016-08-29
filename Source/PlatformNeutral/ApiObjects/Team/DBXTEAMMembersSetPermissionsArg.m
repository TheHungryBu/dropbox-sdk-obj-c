///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMAdminTier.h"
#import "DBXTEAMMembersSetPermissionsArg.h"
#import "DBXTEAMUserSelectorArg.h"

@implementation DBXTEAMMembersSetPermissionsArg 

- (instancetype)initWithUser:(DBXTEAMUserSelectorArg *)user dNewRole:(DBXTEAMAdminTier *)dNewRole {

    self = [super init];
    if (self) {
        _user = user;
        _dNewRole = dNewRole;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMMembersSetPermissionsArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMMembersSetPermissionsArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMMembersSetPermissionsArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMMembersSetPermissionsArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMMembersSetPermissionsArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"user"] = [DBXTEAMUserSelectorArgSerializer serialize:valueObj.user];
    jsonDict[@"new_role"] = [DBXTEAMAdminTierSerializer serialize:valueObj.dNewRole];

    return jsonDict;
}

+ (DBXTEAMMembersSetPermissionsArg *)deserialize:(NSDictionary *)valueDict {
    DBXTEAMUserSelectorArg *user = [DBXTEAMUserSelectorArgSerializer deserialize:valueDict[@"user"]];
    DBXTEAMAdminTier *dNewRole = [DBXTEAMAdminTierSerializer deserialize:valueDict[@"new_role"]];

    return [[DBXTEAMMembersSetPermissionsArg alloc] initWithUser:user dNewRole:dNewRole];
}

@end
