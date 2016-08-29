///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAccessLevel.h"
#import "DBXSHARINGGroupInfo.h"
#import "DBXSHARINGGroupMembershipInfo.h"
#import "DBXSHARINGMemberPermission.h"
#import "DBXSHARINGMembershipInfo.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGGroupMembershipInfo 

- (instancetype)initWithAccessType:(DBXSHARINGAccessLevel *)accessType group:(DBXSHARINGGroupInfo *)group permissions:(NSArray<DBXSHARINGMemberPermission *> *)permissions initials:(NSString *)initials isInherited:(NSNumber *)isInherited {
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](permissions);

    self = [super initWithAccessType:accessType permissions:permissions initials:initials isInherited:isInherited];
    if (self) {
        _group = group;
    }
    return self;
}

- (instancetype)initWithAccessType:(DBXSHARINGAccessLevel *)accessType group:(DBXSHARINGGroupInfo *)group {
    return [self initWithAccessType:accessType group:group permissions:nil initials:nil isInherited:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGGroupMembershipInfoSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGGroupMembershipInfoSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGGroupMembershipInfoSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGGroupMembershipInfoSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGGroupMembershipInfo *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"access_type"] = [DBXSHARINGAccessLevelSerializer serialize:valueObj.accessType];
    jsonDict[@"group"] = [DBXSHARINGGroupInfoSerializer serialize:valueObj.group];
    if (valueObj.permissions) {
        jsonDict[@"permissions"] = [DBXArraySerializer serialize:valueObj.permissions withBlock:^id(id elem) { return [DBXSHARINGMemberPermissionSerializer serialize:elem]; }];
    }
    if (valueObj.initials) {
        jsonDict[@"initials"] = valueObj.initials;
    }
    jsonDict[@"is_inherited"] = valueObj.isInherited;

    return jsonDict;
}

+ (DBXSHARINGGroupMembershipInfo *)deserialize:(NSDictionary *)valueDict {
    DBXSHARINGAccessLevel *accessType = [DBXSHARINGAccessLevelSerializer deserialize:valueDict[@"access_type"]];
    DBXSHARINGGroupInfo *group = [DBXSHARINGGroupInfoSerializer deserialize:valueDict[@"group"]];
    NSArray<DBXSHARINGMemberPermission *> *permissions = valueDict[@"permissions"] ? [DBXArraySerializer deserialize:valueDict[@"permissions"] withBlock:^id(id elem) { return [DBXSHARINGMemberPermissionSerializer deserialize:elem]; }] : nil;
    NSString *initials = valueDict[@"initials"] ?: nil;
    NSNumber *isInherited = valueDict[@"is_inherited"];

    return [[DBXSHARINGGroupMembershipInfo alloc] initWithAccessType:accessType group:group permissions:permissions initials:initials isInherited:isInherited];
}

@end
