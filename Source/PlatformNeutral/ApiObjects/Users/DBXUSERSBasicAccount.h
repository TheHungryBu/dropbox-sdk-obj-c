///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXUSERSAccount.h"

@class DBXUSERSBasicAccount;
@class DBXUSERSName;

/// 
/// The BasicAccount struct.
/// 
/// Basic information about any account.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXUSERSBasicAccount : DBXUSERSAccount <DBXSerializable> 

/// Whether this user is a teammate of the current user. If this account is the
/// current user's account, then this will be true.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull isTeammate;

/// The user's unique team member id. This field will only be present if the
/// user is part of a team and isTeammate is true.
@property (nonatomic, readonly, copy) NSString * _Nullable teamMemberId;

/// 
/// Full constructor for the `DBXUSERSBasicAccount` struct (exposes all instance
/// variables).
/// 
/// - parameter accountId: The user's unique Dropbox ID.
/// - parameter name: Details of a user's name.
/// - parameter email: The user's e-mail address. Do not rely on this without
/// checking the :field:`email_verified` field. Even then, it's possible that
/// the user has since lost access to their e-mail.
/// - parameter emailVerified: Whether the user has verified their e-mail
/// address.
/// - parameter disabled: Whether the user has been disabled.
/// - parameter isTeammate: Whether this user is a teammate of the current user.
/// If this account is the current user's account, then this will be
/// :val:`true`.
/// - parameter profilePhotoUrl: URL for the photo representing the user, if one
/// is set.
/// - parameter teamMemberId: The user's unique team member id. This field will
/// only be present if the user is part of a team and :field:`is_teammate` is
/// :val:`true`.
/// 
/// - returns: An initialized `DBXUSERSBasicAccount` instance.
/// 
- (nonnull instancetype)initWithAccountId:(NSString * _Nonnull)accountId name:(DBXUSERSName * _Nonnull)name email:(NSString * _Nonnull)email emailVerified:(NSNumber * _Nonnull)emailVerified disabled:(NSNumber * _Nonnull)disabled isTeammate:(NSNumber * _Nonnull)isTeammate profilePhotoUrl:(NSString * _Nullable)profilePhotoUrl teamMemberId:(NSString * _Nullable)teamMemberId;

/// 
/// Convenience constructor for the `DBXUSERSBasicAccount` struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// - parameter accountId: The user's unique Dropbox ID.
/// - parameter name: Details of a user's name.
/// - parameter email: The user's e-mail address. Do not rely on this without
/// checking the :field:`email_verified` field. Even then, it's possible that
/// the user has since lost access to their e-mail.
/// - parameter emailVerified: Whether the user has verified their e-mail
/// address.
/// - parameter disabled: Whether the user has been disabled.
/// - parameter isTeammate: Whether this user is a teammate of the current user.
/// If this account is the current user's account, then this will be
/// :val:`true`.
/// 
/// - returns: An initialized `DBXUSERSBasicAccount` instance.
/// 
- (nonnull instancetype)initWithAccountId:(NSString * _Nonnull)accountId name:(DBXUSERSName * _Nonnull)name email:(NSString * _Nonnull)email emailVerified:(NSNumber * _Nonnull)emailVerified disabled:(NSNumber * _Nonnull)disabled isTeammate:(NSNumber * _Nonnull)isTeammate;

@end


/// 
/// The serialization class for the BasicAccount struct.
/// 
@interface DBXUSERSBasicAccountSerializer : NSObject 

/// 
/// Serializes `DBXUSERSBasicAccount` instances.
/// 
///  - parameter instance: An instance of the `DBXUSERSBasicAccount` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXUSERSBasicAccount` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXUSERSBasicAccount * _Nonnull)instance;

/// 
/// Deserializes `DBXUSERSBasicAccount` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXUSERSBasicAccount` API object.
/// 
///  - returns: An instantiation of the `DBXUSERSBasicAccount` object.
/// 
+ (DBXUSERSBasicAccount * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
