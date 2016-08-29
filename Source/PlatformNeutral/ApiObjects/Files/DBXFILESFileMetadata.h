///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXFILESMetadata.h"

@class DBXFILESFileMetadata;
@class DBXFILESFileSharingInfo;
@class DBXFILESMediaInfo;
@class DBXPROPERTIESPropertyGroup;

/// 
/// The FileMetadata struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESFileMetadata : DBXFILESMetadata <DBXSerializable> 

/// A unique identifier for the file.
@property (nonatomic, readonly, copy) NSString * _Nonnull id_;

/// For files, this is the modification time set by the desktop client when the
/// file was added to Dropbox. Since this time is not verified (the Dropbox
/// server stores whatever the desktop client sends up), this should only be
/// used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
@property (nonatomic, readonly) NSDate * _Nonnull clientModified;

/// The last time the file was modified on Dropbox.
@property (nonatomic, readonly) NSDate * _Nonnull serverModified;

/// A unique identifier for the current revision of a file. This field is the
/// same rev as elsewhere in the API and can be used to detect changes and avoid
/// conflicts.
@property (nonatomic, readonly, copy) NSString * _Nonnull rev;

/// The file size in bytes.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull size;

/// Additional information if the file is a photo or video.
@property (nonatomic, readonly) DBXFILESMediaInfo * _Nullable mediaInfo;

/// Set if this file is contained in a shared folder.
@property (nonatomic, readonly) DBXFILESFileSharingInfo * _Nullable sharingInfo;

/// Additional information if the file has custom properties with the property
/// template specified.
@property (nonatomic, readonly) NSArray<DBXPROPERTIESPropertyGroup *> * _Nullable propertyGroups;

/// This flag will only be present if include_has_explicit_shared_members  is
/// true in listFolder or getMetadata. If this  flag is present, it will be true
/// if this file has any explicit shared  members. This is different from
/// sharing_info in that this could be true  in the case where a file has
/// explicit members but is not contained within  a shared folder.
@property (nonatomic, readonly, copy) NSNumber * _Nullable hasExplicitSharedMembers;

/// 
/// Full constructor for the `DBXFILESFileMetadata` struct (exposes all instance
/// variables).
/// 
/// - parameter name: The last component of the path (including extension). This
/// never contains a slash.
/// - parameter id_: A unique identifier for the file.
/// - parameter clientModified: For files, this is the modification time set by
/// the desktop client when the file was added to Dropbox. Since this time is
/// not verified (the Dropbox server stores whatever the desktop client sends
/// up), this should only be used for display purposes (such as sorting) and
/// not, for example, to determine if a file has changed or not.
/// - parameter serverModified: The last time the file was modified on Dropbox.
/// - parameter rev: A unique identifier for the current revision of a file.
/// This field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// - parameter size: The file size in bytes.
/// - parameter pathLower: The lowercased full path in the user's Dropbox. This
/// always starts with a slash. This field will be null if the file or folder is
/// not mounted.
/// - parameter pathDisplay: The cased path to be used for display purposes
/// only. In rare instances the casing will not correctly match the user's
/// filesystem, but this behavior will match the path provided in the Core API
/// v1. Changes to the casing of paths won't be returned by
/// :route:`list_folder/continue`. This field will be null if the file or folder
/// is not mounted.
/// - parameter parentSharedFolderId: Deprecated. Please use
/// :field:`FileSharingInfo.parent_shared_folder_id` or
/// :field:`FolderSharingInfo.parent_shared_folder_id` instead.
/// - parameter mediaInfo: Additional information if the file is a photo or
/// video.
/// - parameter sharingInfo: Set if this file is contained in a shared folder.
/// - parameter propertyGroups: Additional information if the file has custom
/// properties with the property template specified.
/// - parameter hasExplicitSharedMembers: This flag will only be present if
/// include_has_explicit_shared_members  is true in :route:`list_folder` or
/// :route:`get_metadata`. If this  flag is present, it will be true if this
/// file has any explicit shared  members. This is different from sharing_info
/// in that this could be true  in the case where a file has explicit members
/// but is not contained within  a shared folder.
/// 
/// - returns: An initialized `DBXFILESFileMetadata` instance.
/// 
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_ clientModified:(NSDate * _Nonnull)clientModified serverModified:(NSDate * _Nonnull)serverModified rev:(NSString * _Nonnull)rev size:(NSNumber * _Nonnull)size pathLower:(NSString * _Nullable)pathLower pathDisplay:(NSString * _Nullable)pathDisplay parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId mediaInfo:(DBXFILESMediaInfo * _Nullable)mediaInfo sharingInfo:(DBXFILESFileSharingInfo * _Nullable)sharingInfo propertyGroups:(NSArray<DBXPROPERTIESPropertyGroup *> * _Nullable)propertyGroups hasExplicitSharedMembers:(NSNumber * _Nullable)hasExplicitSharedMembers;

/// 
/// Convenience constructor for the `DBXFILESFileMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// - parameter name: The last component of the path (including extension). This
/// never contains a slash.
/// - parameter id_: A unique identifier for the file.
/// - parameter clientModified: For files, this is the modification time set by
/// the desktop client when the file was added to Dropbox. Since this time is
/// not verified (the Dropbox server stores whatever the desktop client sends
/// up), this should only be used for display purposes (such as sorting) and
/// not, for example, to determine if a file has changed or not.
/// - parameter serverModified: The last time the file was modified on Dropbox.
/// - parameter rev: A unique identifier for the current revision of a file.
/// This field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// - parameter size: The file size in bytes.
/// 
/// - returns: An initialized `DBXFILESFileMetadata` instance.
/// 
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_ clientModified:(NSDate * _Nonnull)clientModified serverModified:(NSDate * _Nonnull)serverModified rev:(NSString * _Nonnull)rev size:(NSNumber * _Nonnull)size;

@end


/// 
/// The serialization class for the FileMetadata struct.
/// 
@interface DBXFILESFileMetadataSerializer : NSObject 

/// 
/// Serializes `DBXFILESFileMetadata` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESFileMetadata` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESFileMetadata` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESFileMetadata * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESFileMetadata` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESFileMetadata` API object.
/// 
///  - returns: An instantiation of the `DBXFILESFileMetadata` object.
/// 
+ (DBXFILESFileMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
