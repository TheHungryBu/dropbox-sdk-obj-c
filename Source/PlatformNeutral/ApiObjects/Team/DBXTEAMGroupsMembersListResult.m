///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupMemberInfo.h"
#import "DBXTEAMGroupsMembersListResult.h"

@implementation DBXTEAMGroupsMembersListResult 

- (instancetype)initWithMembers:(NSArray<DBXTEAMGroupMemberInfo *> *)members cursor:(NSString *)cursor hasMore:(NSNumber *)hasMore {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](members);

    self = [super init];
    if (self) {
        _members = members;
        _cursor = cursor;
        _hasMore = hasMore;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupsMembersListResultSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupsMembersListResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupsMembersListResultSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupsMembersListResultSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupsMembersListResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"members"] = [DBXArraySerializer serialize:valueObj.members withBlock:^id(id elem) { return [DBXTEAMGroupMemberInfoSerializer serialize:elem]; }];
    jsonDict[@"cursor"] = valueObj.cursor;
    jsonDict[@"has_more"] = valueObj.hasMore;

    return jsonDict;
}

+ (DBXTEAMGroupsMembersListResult *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBXTEAMGroupMemberInfo *> *members = [DBXArraySerializer deserialize:valueDict[@"members"] withBlock:^id(id elem) { return [DBXTEAMGroupMemberInfoSerializer deserialize:elem]; }];
    NSString *cursor = valueDict[@"cursor"];
    NSNumber *hasMore = valueDict[@"has_more"];

    return [[DBXTEAMGroupsMembersListResult alloc] initWithMembers:members cursor:cursor hasMore:hasMore];
}

@end
