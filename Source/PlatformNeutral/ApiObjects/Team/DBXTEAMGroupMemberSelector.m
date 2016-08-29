///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupMemberSelector.h"
#import "DBXTEAMGroupSelector.h"
#import "DBXTEAMUserSelectorArg.h"

@implementation DBXTEAMGroupMemberSelector 

- (instancetype)initWithGroup:(DBXTEAMGroupSelector *)group user:(DBXTEAMUserSelectorArg *)user {

    self = [super init];
    if (self) {
        _group = group;
        _user = user;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupMemberSelectorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupMemberSelectorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupMemberSelectorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupMemberSelectorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupMemberSelector *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"group"] = [DBXTEAMGroupSelectorSerializer serialize:valueObj.group];
    jsonDict[@"user"] = [DBXTEAMUserSelectorArgSerializer serialize:valueObj.user];

    return jsonDict;
}

+ (DBXTEAMGroupMemberSelector *)deserialize:(NSDictionary *)valueDict {
    DBXTEAMGroupSelector *group = [DBXTEAMGroupSelectorSerializer deserialize:valueDict[@"group"]];
    DBXTEAMUserSelectorArg *user = [DBXTEAMUserSelectorArgSerializer deserialize:valueDict[@"user"]];

    return [[DBXTEAMGroupMemberSelector alloc] initWithGroup:group user:user];
}

@end
