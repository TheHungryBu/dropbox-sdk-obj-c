///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAddFolderMemberArg;
@class DBXSHARINGAddMember;

/// 
/// The AddFolderMemberArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGAddFolderMemberArg : NSObject <DBXSerializable> 

/// The ID for the shared folder.
@property (nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

/// The intended list of members to add.  Added members will receive invites to
/// join the shared folder.
@property (nonatomic, readonly) NSArray<DBXSHARINGAddMember *> * _Nonnull members;

/// Whether added members should be notified via email and device notifications
/// of their invite.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull quiet;

/// Optional message to display to added members in their invitation.
@property (nonatomic, readonly, copy) NSString * _Nullable customMessage;

/// 
/// Full constructor for the `DBXSHARINGAddFolderMemberArg` struct (exposes all
/// instance variables).
/// 
/// - parameter sharedFolderId: The ID for the shared folder.
/// - parameter members: The intended list of members to add.  Added members
/// will receive invites to join the shared folder.
/// - parameter quiet: Whether added members should be notified via email and
/// device notifications of their invite.
/// - parameter customMessage: Optional message to display to added members in
/// their invitation.
/// 
/// - returns: An initialized `DBXSHARINGAddFolderMemberArg` instance.
/// 
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId members:(NSArray<DBXSHARINGAddMember *> * _Nonnull)members quiet:(NSNumber * _Nullable)quiet customMessage:(NSString * _Nullable)customMessage;

/// 
/// Convenience constructor for the `DBXSHARINGAddFolderMemberArg` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// - parameter sharedFolderId: The ID for the shared folder.
/// - parameter members: The intended list of members to add.  Added members
/// will receive invites to join the shared folder.
/// 
/// - returns: An initialized `DBXSHARINGAddFolderMemberArg` instance.
/// 
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId members:(NSArray<DBXSHARINGAddMember *> * _Nonnull)members;

@end


/// 
/// The serialization class for the AddFolderMemberArg struct.
/// 
@interface DBXSHARINGAddFolderMemberArgSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGAddFolderMemberArg` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGAddFolderMemberArg` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGAddFolderMemberArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGAddFolderMemberArg * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGAddFolderMemberArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGAddFolderMemberArg` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGAddFolderMemberArg` object.
/// 
+ (DBXSHARINGAddFolderMemberArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
