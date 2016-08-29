///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMIncludeMembersArg.h"

@implementation DBXTEAMIncludeMembersArg 

- (instancetype)initWithReturnMembers:(NSNumber *)returnMembers {

    self = [super init];
    if (self) {
        _returnMembers = returnMembers ?: @YES;
    }
    return self;
}

- (instancetype)init {
    return [self initWithReturnMembers:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMIncludeMembersArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMIncludeMembersArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMIncludeMembersArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMIncludeMembersArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMIncludeMembersArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"return_members"] = valueObj.returnMembers;

    return jsonDict;
}

+ (DBXTEAMIncludeMembersArg *)deserialize:(NSDictionary *)valueDict {
    NSNumber *returnMembers = valueDict[@"return_members"];

    return [[DBXTEAMIncludeMembersArg alloc] initWithReturnMembers:returnMembers];
}

@end
