///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESFolderMetadata.h"
#import "DBXFILESFolderSharingInfo.h"
#import "DBXFILESMetadata.h"
#import "DBXPROPERTIESPropertyGroup.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESFolderMetadata 

- (instancetype)initWithName:(NSString *)name id_:(NSString *)id_ pathLower:(NSString *)pathLower pathDisplay:(NSString *)pathDisplay parentSharedFolderId:(NSString *)parentSharedFolderId sharedFolderId:(NSString *)sharedFolderId sharingInfo:(DBXFILESFolderSharingInfo *)sharingInfo propertyGroups:(NSArray<DBXPROPERTIESPropertyGroup *> *)propertyGroups {
    [DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:nil](id_);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"]](parentSharedFolderId);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"]](sharedFolderId);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](propertyGroups);

    self = [super initWithName:name pathLower:pathLower pathDisplay:pathDisplay parentSharedFolderId:parentSharedFolderId];
    if (self) {
        _id_ = id_;
        _sharedFolderId = sharedFolderId;
        _sharingInfo = sharingInfo;
        _propertyGroups = propertyGroups;
    }
    return self;
}

- (instancetype)initWithName:(NSString *)name id_:(NSString *)id_ {
    return [self initWithName:name id_:id_ pathLower:nil pathDisplay:nil parentSharedFolderId:nil sharedFolderId:nil sharingInfo:nil propertyGroups:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESFolderMetadataSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESFolderMetadataSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESFolderMetadataSerializer serialize:self] description];
}

@end


@implementation DBXFILESFolderMetadataSerializer 

+ (NSDictionary *)serialize:(DBXFILESFolderMetadata *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"name"] = valueObj.name;
    jsonDict[@"id"] = valueObj.id_;
    if (valueObj.pathLower) {
        jsonDict[@"path_lower"] = valueObj.pathLower;
    }
    if (valueObj.pathDisplay) {
        jsonDict[@"path_display"] = valueObj.pathDisplay;
    }
    if (valueObj.parentSharedFolderId) {
        jsonDict[@"parent_shared_folder_id"] = valueObj.parentSharedFolderId;
    }
    if (valueObj.sharedFolderId) {
        jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;
    }
    if (valueObj.sharingInfo) {
        jsonDict[@"sharing_info"] = [DBXFILESFolderSharingInfoSerializer serialize:valueObj.sharingInfo];
    }
    if (valueObj.propertyGroups) {
        jsonDict[@"property_groups"] = [DBXArraySerializer serialize:valueObj.propertyGroups withBlock:^id(id elem) { return [DBXPROPERTIESPropertyGroupSerializer serialize:elem]; }];
    }

    return jsonDict;
}

+ (DBXFILESFolderMetadata *)deserialize:(NSDictionary *)valueDict {
    NSString *name = valueDict[@"name"];
    NSString *id_ = valueDict[@"id"];
    NSString *pathLower = valueDict[@"path_lower"] ?: nil;
    NSString *pathDisplay = valueDict[@"path_display"] ?: nil;
    NSString *parentSharedFolderId = valueDict[@"parent_shared_folder_id"] ?: nil;
    NSString *sharedFolderId = valueDict[@"shared_folder_id"] ?: nil;
    DBXFILESFolderSharingInfo *sharingInfo = valueDict[@"sharing_info"] ? [DBXFILESFolderSharingInfoSerializer deserialize:valueDict[@"sharing_info"]] : nil;
    NSArray<DBXPROPERTIESPropertyGroup *> *propertyGroups = valueDict[@"property_groups"] ? [DBXArraySerializer deserialize:valueDict[@"property_groups"] withBlock:^id(id elem) { return [DBXPROPERTIESPropertyGroupSerializer deserialize:elem]; }] : nil;

    return [[DBXFILESFolderMetadata alloc] initWithName:name id_:id_ pathLower:pathLower pathDisplay:pathDisplay parentSharedFolderId:parentSharedFolderId sharedFolderId:sharedFolderId sharingInfo:sharingInfo propertyGroups:propertyGroups];
}

@end
