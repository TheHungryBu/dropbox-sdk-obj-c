///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAclUpdatePolicy;
@class DBXSHARINGFolderPolicy;
@class DBXSHARINGMemberPolicy;
@class DBXSHARINGSharedLinkPolicy;

/// 
/// The FolderPolicy struct.
/// 
/// A set of policies governing membership and privileges for a shared folder.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGFolderPolicy : NSObject <DBXSerializable> 

/// Who can be a member of this shared folder, as set on the folder itself. The
/// effective policy may differ from this value if the team-wide policy is more
/// restrictive. Present only if the folder is owned by a team.
@property (nonatomic, readonly) DBXSHARINGMemberPolicy * _Nullable memberPolicy;

/// Who can be a member of this shared folder, taking into account both the
/// folder and the team-wide policy. This value may differ from that of
/// member_policy if the team-wide policy is more restrictive than the folder
/// policy. Present only if the folder is owned by a team.
@property (nonatomic, readonly) DBXSHARINGMemberPolicy * _Nullable resolvedMemberPolicy;

/// Who can add and remove members from this shared folder.
@property (nonatomic, readonly) DBXSHARINGAclUpdatePolicy * _Nonnull aclUpdatePolicy;

/// Who links can be shared with.
@property (nonatomic, readonly) DBXSHARINGSharedLinkPolicy * _Nonnull sharedLinkPolicy;

/// 
/// Full constructor for the `DBXSHARINGFolderPolicy` struct (exposes all
/// instance variables).
/// 
/// - parameter aclUpdatePolicy: Who can add and remove members from this shared
/// folder.
/// - parameter sharedLinkPolicy: Who links can be shared with.
/// - parameter memberPolicy: Who can be a member of this shared folder, as set
/// on the folder itself. The effective policy may differ from this value if the
/// team-wide policy is more restrictive. Present only if the folder is owned by
/// a team.
/// - parameter resolvedMemberPolicy: Who can be a member of this shared folder,
/// taking into account both the folder and the team-wide policy. This value may
/// differ from that of member_policy if the team-wide policy is more
/// restrictive than the folder policy. Present only if the folder is owned by a
/// team.
/// 
/// - returns: An initialized `DBXSHARINGFolderPolicy` instance.
/// 
- (nonnull instancetype)initWithAclUpdatePolicy:(DBXSHARINGAclUpdatePolicy * _Nonnull)aclUpdatePolicy sharedLinkPolicy:(DBXSHARINGSharedLinkPolicy * _Nonnull)sharedLinkPolicy memberPolicy:(DBXSHARINGMemberPolicy * _Nullable)memberPolicy resolvedMemberPolicy:(DBXSHARINGMemberPolicy * _Nullable)resolvedMemberPolicy;

/// 
/// Convenience constructor for the `DBXSHARINGFolderPolicy` struct (exposes
/// only non-nullable instance variables with no default value).
/// 
/// - parameter aclUpdatePolicy: Who can add and remove members from this shared
/// folder.
/// - parameter sharedLinkPolicy: Who links can be shared with.
/// 
/// - returns: An initialized `DBXSHARINGFolderPolicy` instance.
/// 
- (nonnull instancetype)initWithAclUpdatePolicy:(DBXSHARINGAclUpdatePolicy * _Nonnull)aclUpdatePolicy sharedLinkPolicy:(DBXSHARINGSharedLinkPolicy * _Nonnull)sharedLinkPolicy;

@end


/// 
/// The serialization class for the FolderPolicy struct.
/// 
@interface DBXSHARINGFolderPolicySerializer : NSObject 

/// 
/// Serializes `DBXSHARINGFolderPolicy` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGFolderPolicy` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGFolderPolicy` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFolderPolicy * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGFolderPolicy` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGFolderPolicy` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGFolderPolicy` object.
/// 
+ (DBXSHARINGFolderPolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
