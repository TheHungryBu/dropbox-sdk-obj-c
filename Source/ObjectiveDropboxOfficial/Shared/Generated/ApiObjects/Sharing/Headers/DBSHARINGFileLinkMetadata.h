///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSHARINGSharedLinkMetadata.h"
#import "DBSerializableProtocol.h"

@class DBSHARINGFileLinkMetadata;
@class DBSHARINGLinkPermissions;
@class DBSHARINGTeamMemberInfo;
@class DBUSERSTeam;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileLinkMetadata` struct.
///
/// The metadata of a file shared link
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFileLinkMetadata : DBSHARINGSharedLinkMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The modification time set by the desktop client when the file was added to
/// Dropbox. Since this time is not verified (the Dropbox server stores whatever
/// the desktop client sends up), this should only be used for display purposes
/// (such as sorting) and not, for example, to determine if a file has changed
/// or not.
@property (nonatomic, readonly) NSDate *clientModified;

/// The last time the file was modified on Dropbox.
@property (nonatomic, readonly) NSDate *serverModified;

/// A unique identifier for the current revision of a file. This field is the
/// same rev as elsewhere in the API and can be used to detect changes and avoid
/// conflicts.
@property (nonatomic, readonly, copy) NSString *rev;

/// The file size in bytes.
@property (nonatomic, readonly) NSNumber *size;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link.
/// @param name The linked file name (including extension). This never contains
/// a slash.
/// @param linkPermissions The link's access permissions.
/// @param clientModified The modification time set by the desktop client when
/// the file was added to Dropbox. Since this time is not verified (the Dropbox
/// server stores whatever the desktop client sends up), this should only be
/// used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
/// @param serverModified The last time the file was modified on Dropbox.
/// @param rev A unique identifier for the current revision of a file. This
/// field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// @param size The file size in bytes.
/// @param id_ A unique identifier for the linked file.
/// @param expires Expiration time, if set. By default the link won't expire.
/// @param pathLower The lowercased full path in the user's Dropbox. This always
/// starts with a slash. This field will only be present only if the linked file
/// is in the authenticated user's  dropbox.
/// @param teamMemberInfo The team membership information of the link's owner.
/// This field will only be present  if the link's owner is a team member.
/// @param contentOwnerTeamInfo The team information of the content's owner.
/// This field will only be present if the content's owner is a team member and
/// the content's owner team is different from the link's owner team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                       name:(NSString *)name
            linkPermissions:(DBSHARINGLinkPermissions *)linkPermissions
             clientModified:(NSDate *)clientModified
             serverModified:(NSDate *)serverModified
                        rev:(NSString *)rev
                       size:(NSNumber *)size
                        id_:(nullable NSString *)id_
                    expires:(nullable NSDate *)expires
                  pathLower:(nullable NSString *)pathLower
             teamMemberInfo:(nullable DBSHARINGTeamMemberInfo *)teamMemberInfo
       contentOwnerTeamInfo:(nullable DBUSERSTeam *)contentOwnerTeamInfo;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param url URL of the shared link.
/// @param name The linked file name (including extension). This never contains
/// a slash.
/// @param linkPermissions The link's access permissions.
/// @param clientModified The modification time set by the desktop client when
/// the file was added to Dropbox. Since this time is not verified (the Dropbox
/// server stores whatever the desktop client sends up), this should only be
/// used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
/// @param serverModified The last time the file was modified on Dropbox.
/// @param rev A unique identifier for the current revision of a file. This
/// field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// @param size The file size in bytes.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                       name:(NSString *)name
            linkPermissions:(DBSHARINGLinkPermissions *)linkPermissions
             clientModified:(NSDate *)clientModified
             serverModified:(NSDate *)serverModified
                        rev:(NSString *)rev
                       size:(NSNumber *)size;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileLinkMetadata` struct.
///
@interface DBSHARINGFileLinkMetadataSerializer : NSObject

///
/// Serializes `DBSHARINGFileLinkMetadata` instances.
///
/// @param instance An instance of the `DBSHARINGFileLinkMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFileLinkMetadata` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGFileLinkMetadata *)instance;

///
/// Deserializes `DBSHARINGFileLinkMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFileLinkMetadata` API object.
///
/// @return An instantiation of the `DBSHARINGFileLinkMetadata` object.
///
+ (DBSHARINGFileLinkMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
