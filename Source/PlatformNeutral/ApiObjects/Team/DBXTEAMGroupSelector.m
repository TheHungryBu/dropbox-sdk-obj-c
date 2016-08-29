///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupSelector.h"

@implementation DBXTEAMGroupSelector 

@synthesize groupId = _groupId;
@synthesize groupExternalId = _groupExternalId;

- (instancetype)initWithGroupId:(NSString *)groupId {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupSelectorGroupId;
        _groupId = groupId;
    }
    return self;
}

- (instancetype)initWithGroupExternalId:(NSString *)groupExternalId {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupSelectorGroupExternalId;
        _groupExternalId = groupExternalId;
    }
    return self;
}

- (BOOL)isGroupId {
    return _tag == DBXTEAMGroupSelectorGroupId;
}

- (BOOL)isGroupExternalId {
    return _tag == DBXTEAMGroupSelectorGroupExternalId;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMGroupSelectorGroupId:
           return @"DBXTEAMGroupSelectorGroupId";
        case DBXTEAMGroupSelectorGroupExternalId:
           return @"DBXTEAMGroupSelectorGroupExternalId";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (NSString *)groupId {
    if (![self isGroupId]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMGroupSelectorGroupId`, but was %@.", [self getTagName]];
    }
    return _groupId;
}

- (NSString *)groupExternalId {
    if (![self isGroupExternalId]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMGroupSelectorGroupExternalId`, but was %@.", [self getTagName]];
    }
    return _groupExternalId;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupSelectorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupSelectorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupSelectorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupSelectorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupSelector *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isGroupId]) {
        jsonDict[@"group_id"] = valueObj.groupId;
        jsonDict[@".tag"] = @"group_id";
    }
    else if ([valueObj isGroupExternalId]) {
        jsonDict[@"group_external_id"] = valueObj.groupExternalId;
        jsonDict[@".tag"] = @"group_external_id";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMGroupSelector *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"group_id"]) {
        NSString *groupId = valueDict[@"group_id"];
        return [[DBXTEAMGroupSelector alloc] initWithGroupId:groupId];
    }
    else if ([tag isEqualToString:@"group_external_id"]) {
        NSString *groupExternalId = valueDict[@"group_external_id"];
        return [[DBXTEAMGroupSelector alloc] initWithGroupExternalId:groupExternalId];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
