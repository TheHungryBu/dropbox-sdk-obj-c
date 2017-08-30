///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESMetadata.h"
#import "DBSerializableProtocol.h"

@class DBFILESFolderMetadata;
@class DBFILESFolderSharingInfo;
@class DBPROPERTIESPropertyGroup;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderMetadata` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESFolderMetadata : DBFILESMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A unique identifier for the folder.
@property (nonatomic, readonly, copy) NSString *id_;

/// Deprecated. Please use sharingInfo instead.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderId;

/// Set if the folder is contained in a shared folder or is a shared folder
/// mount point.
@property (nonatomic, readonly, nullable) DBFILESFolderSharingInfo *sharingInfo;

/// Additional information if the file has custom properties with the property
/// template specified.
@property (nonatomic, readonly, nullable) NSArray<DBPROPERTIESPropertyGroup *> *propertyGroups;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name The last component of the path (including extension). This never
/// contains a slash.
/// @param id_ A unique identifier for the folder.
/// @param pathLower The lowercased full path in the user's Dropbox. This always
/// starts with a slash. This field will be null if the file or folder is not
/// mounted.
/// @param pathDisplay The cased path to be used for display purposes only. In
/// rare instances the casing will not correctly match the user's filesystem,
/// but this behavior will match the path provided in the Core API v1, and at
/// least the last path component will have the correct casing. Changes to only
/// the casing of paths won't be returned by `listFolderContinue`. This field
/// will be null if the file or folder is not mounted.
/// @param parentSharedFolderId Deprecated. Please use `parentSharedFolderId` in
/// `DBFILESFileSharingInfo` or `parentSharedFolderId` in
/// `DBFILESFolderSharingInfo` instead.
/// @param sharedFolderId Deprecated. Please use sharingInfo instead.
/// @param sharingInfo Set if the folder is contained in a shared folder or is a
/// shared folder mount point.
/// @param propertyGroups Additional information if the file has custom
/// properties with the property template specified.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                         id_:(NSString *)id_
                   pathLower:(nullable NSString *)pathLower
                 pathDisplay:(nullable NSString *)pathDisplay
        parentSharedFolderId:(nullable NSString *)parentSharedFolderId
              sharedFolderId:(nullable NSString *)sharedFolderId
                 sharingInfo:(nullable DBFILESFolderSharingInfo *)sharingInfo
              propertyGroups:(nullable NSArray<DBPROPERTIESPropertyGroup *> *)propertyGroups;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param name The last component of the path (including extension). This never
/// contains a slash.
/// @param id_ A unique identifier for the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name id_:(NSString *)id_;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FolderMetadata` struct.
///
@interface DBFILESFolderMetadataSerializer : NSObject

///
/// Serializes `DBFILESFolderMetadata` instances.
///
/// @param instance An instance of the `DBFILESFolderMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESFolderMetadata` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESFolderMetadata *)instance;

///
/// Deserializes `DBFILESFolderMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESFolderMetadata` API object.
///
/// @return An instantiation of the `DBFILESFolderMetadata` object.
///
+ (DBFILESFolderMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
