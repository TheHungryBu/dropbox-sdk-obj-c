///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupsSelector.h"

@implementation DBXTEAMGroupsSelector 

@synthesize groupIds = _groupIds;
@synthesize groupExternalIds = _groupExternalIds;

- (instancetype)initWithGroupIds:(NSArray<NSString *> *)groupIds {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupsSelectorGroupIds;
        _groupIds = groupIds;
    }
    return self;
}

- (instancetype)initWithGroupExternalIds:(NSArray<NSString *> *)groupExternalIds {
    self = [super init];
    if (self) {
        _tag = DBXTEAMGroupsSelectorGroupExternalIds;
        _groupExternalIds = groupExternalIds;
    }
    return self;
}

- (BOOL)isGroupIds {
    return _tag == DBXTEAMGroupsSelectorGroupIds;
}

- (BOOL)isGroupExternalIds {
    return _tag == DBXTEAMGroupsSelectorGroupExternalIds;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMGroupsSelectorGroupIds:
           return @"DBXTEAMGroupsSelectorGroupIds";
        case DBXTEAMGroupsSelectorGroupExternalIds:
           return @"DBXTEAMGroupsSelectorGroupExternalIds";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (NSArray<NSString *> *)groupIds {
    if (![self isGroupIds]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMGroupsSelectorGroupIds`, but was %@.", [self getTagName]];
    }
    return _groupIds;
}

- (NSArray<NSString *> *)groupExternalIds {
    if (![self isGroupExternalIds]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMGroupsSelectorGroupExternalIds`, but was %@.", [self getTagName]];
    }
    return _groupExternalIds;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGroupsSelectorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupsSelectorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupsSelectorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupsSelectorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupsSelector *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isGroupIds]) {
        jsonDict[@"group_ids"] = [DBXArraySerializer serialize:valueObj.groupIds withBlock:^id(id elem) { return elem; }];
        jsonDict[@".tag"] = @"group_ids";
    }
    else if ([valueObj isGroupExternalIds]) {
        jsonDict[@"group_external_ids"] = [DBXArraySerializer serialize:valueObj.groupExternalIds withBlock:^id(id elem) { return elem; }];
        jsonDict[@".tag"] = @"group_external_ids";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMGroupsSelector *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"group_ids"]) {
        NSArray<NSString *> *groupIds = [DBXArraySerializer deserialize:valueDict[@"group_ids"] withBlock:^id(id elem) { return elem; }];
        return [[DBXTEAMGroupsSelector alloc] initWithGroupIds:groupIds];
    }
    else if ([tag isEqualToString:@"group_external_ids"]) {
        NSArray<NSString *> *groupExternalIds = [DBXArraySerializer deserialize:valueDict[@"group_external_ids"] withBlock:^id(id elem) { return elem; }];
        return [[DBXTEAMGroupsSelector alloc] initWithGroupExternalIds:groupExternalIds];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
