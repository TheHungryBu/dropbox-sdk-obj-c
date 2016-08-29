///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupSelector.h"
#import "DBXTEAMGroupsMembersListArg.h"

@implementation DBXTEAMGroupsMembersListArg 

- (instancetype)initWithGroup:(DBXTEAMGroupSelector *)group limit:(NSNumber *)limit {
    [DBXStoneValidators numericValidator:@(1) maxValue:@(1000)](limit ?: @(1000));

    self = [super init];
    if (self) {
        _group = group;
        _limit = limit ?: @(1000);
    }
    return self;
}

- (instancetype)initWithGroup:(DBXTEAMGroupSelector *)group {
    return [self initWithGroup:group limit:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupsMembersListArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupsMembersListArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupsMembersListArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupsMembersListArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupsMembersListArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"group"] = [DBXTEAMGroupSelectorSerializer serialize:valueObj.group];
    jsonDict[@"limit"] = valueObj.limit;

    return jsonDict;
}

+ (DBXTEAMGroupsMembersListArg *)deserialize:(NSDictionary *)valueDict {
    DBXTEAMGroupSelector *group = [DBXTEAMGroupSelectorSerializer deserialize:valueDict[@"group"]];
    NSNumber *limit = valueDict[@"limit"];

    return [[DBXTEAMGroupsMembersListArg alloc] initWithGroup:group limit:limit];
}

@end
