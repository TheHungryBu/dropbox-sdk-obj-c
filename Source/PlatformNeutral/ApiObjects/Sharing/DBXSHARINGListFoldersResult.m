///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGListFoldersResult.h"
#import "DBXSHARINGSharedFolderMetadata.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFoldersResult 

- (instancetype)initWithEntries:(NSArray<DBXSHARINGSharedFolderMetadata *> *)entries cursor:(NSString *)cursor {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](entries);

    self = [super init];
    if (self) {
        _entries = entries;
        _cursor = cursor;
    }
    return self;
}

- (instancetype)initWithEntries:(NSArray<DBXSHARINGSharedFolderMetadata *> *)entries {
    return [self initWithEntries:entries cursor:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGListFoldersResultSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFoldersResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFoldersResultSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFoldersResultSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFoldersResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"entries"] = [DBXArraySerializer serialize:valueObj.entries withBlock:^id(id elem) { return [DBXSHARINGSharedFolderMetadataSerializer serialize:elem]; }];
    if (valueObj.cursor) {
        jsonDict[@"cursor"] = valueObj.cursor;
    }

    return jsonDict;
}

+ (DBXSHARINGListFoldersResult *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBXSHARINGSharedFolderMetadata *> *entries = [DBXArraySerializer deserialize:valueDict[@"entries"] withBlock:^id(id elem) { return [DBXSHARINGSharedFolderMetadataSerializer deserialize:elem]; }];
    NSString *cursor = valueDict[@"cursor"] ?: nil;

    return [[DBXSHARINGListFoldersResult alloc] initWithEntries:entries cursor:cursor];
}

@end
