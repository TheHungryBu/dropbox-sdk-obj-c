///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMAdminTier;
@class DBXTEAMMembersSetPermissionsArg;
@class DBXTEAMUserSelectorArg;

/// 
/// The MembersSetPermissionsArg struct.
/// 
/// Exactly one of team_member_id, email, or external_id must be provided to
/// identify the user account.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersSetPermissionsArg : NSObject <DBXSerializable> 

/// Identity of user whose role will be set.
@property (nonatomic, readonly) DBXTEAMUserSelectorArg * _Nonnull user;

/// The new role of the member.
@property (nonatomic, readonly) DBXTEAMAdminTier * _Nonnull dNewRole;

/// 
/// Full constructor for the `DBXTEAMMembersSetPermissionsArg` struct (exposes
/// all instance variables).
/// 
/// - parameter user: Identity of user whose role will be set.
/// - parameter dNewRole: The new role of the member.
/// 
/// - returns: An initialized `DBXTEAMMembersSetPermissionsArg` instance.
/// 
- (nonnull instancetype)initWithUser:(DBXTEAMUserSelectorArg * _Nonnull)user dNewRole:(DBXTEAMAdminTier * _Nonnull)dNewRole;

@end


/// 
/// The serialization class for the MembersSetPermissionsArg struct.
/// 
@interface DBXTEAMMembersSetPermissionsArgSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMembersSetPermissionsArg` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMembersSetPermissionsArg`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMembersSetPermissionsArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersSetPermissionsArg * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMembersSetPermissionsArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMembersSetPermissionsArg` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMembersSetPermissionsArg`
/// object.
/// 
+ (DBXTEAMMembersSetPermissionsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
