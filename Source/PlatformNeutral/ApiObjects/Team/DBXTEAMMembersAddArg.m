///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMMemberAddArg.h"
#import "DBXTEAMMembersAddArg.h"

@implementation DBXTEAMMembersAddArg 

- (instancetype)initWithDNewMembers:(NSArray<DBXTEAMMemberAddArg *> *)dNewMembers forceAsync:(NSNumber *)forceAsync {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](dNewMembers);

    self = [super init];
    if (self) {
        _dNewMembers = dNewMembers;
        _forceAsync = forceAsync ?: @NO;
    }
    return self;
}

- (instancetype)initWithDNewMembers:(NSArray<DBXTEAMMemberAddArg *> *)dNewMembers {
    return [self initWithDNewMembers:dNewMembers forceAsync:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMMembersAddArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMMembersAddArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMMembersAddArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMMembersAddArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMMembersAddArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"new_members"] = [DBXArraySerializer serialize:valueObj.dNewMembers withBlock:^id(id elem) { return [DBXTEAMMemberAddArgSerializer serialize:elem]; }];
    jsonDict[@"force_async"] = valueObj.forceAsync;

    return jsonDict;
}

+ (DBXTEAMMembersAddArg *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBXTEAMMemberAddArg *> *dNewMembers = [DBXArraySerializer deserialize:valueDict[@"new_members"] withBlock:^id(id elem) { return [DBXTEAMMemberAddArgSerializer deserialize:elem]; }];
    NSNumber *forceAsync = valueDict[@"force_async"];

    return [[DBXTEAMMembersAddArg alloc] initWithDNewMembers:dNewMembers forceAsync:forceAsync];
}

@end
