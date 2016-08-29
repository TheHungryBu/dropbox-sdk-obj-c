///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXUSERSIndividualSpaceAllocation.h"

@implementation DBXUSERSIndividualSpaceAllocation 

- (instancetype)initWithAllocated:(NSNumber *)allocated {

    self = [super init];
    if (self) {
        _allocated = allocated;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXUSERSIndividualSpaceAllocationSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXUSERSIndividualSpaceAllocationSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXUSERSIndividualSpaceAllocationSerializer serialize:self] description];
}

@end


@implementation DBXUSERSIndividualSpaceAllocationSerializer 

+ (NSDictionary *)serialize:(DBXUSERSIndividualSpaceAllocation *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"allocated"] = valueObj.allocated;

    return jsonDict;
}

+ (DBXUSERSIndividualSpaceAllocation *)deserialize:(NSDictionary *)valueDict {
    NSNumber *allocated = valueDict[@"allocated"];

    return [[DBXUSERSIndividualSpaceAllocation alloc] initWithAllocated:allocated];
}

@end
