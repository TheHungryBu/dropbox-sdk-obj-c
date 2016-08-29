///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupsMembersListContinueArg.h"

@implementation DBXTEAMGroupsMembersListContinueArg 

- (instancetype)initWithCursor:(NSString *)cursor {

    self = [super init];
    if (self) {
        _cursor = cursor;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupsMembersListContinueArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupsMembersListContinueArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupsMembersListContinueArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupsMembersListContinueArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupsMembersListContinueArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"cursor"] = valueObj.cursor;

    return jsonDict;
}

+ (DBXTEAMGroupsMembersListContinueArg *)deserialize:(NSDictionary *)valueDict {
    NSString *cursor = valueDict[@"cursor"];

    return [[DBXTEAMGroupsMembersListContinueArg alloc] initWithCursor:cursor];
}

@end
