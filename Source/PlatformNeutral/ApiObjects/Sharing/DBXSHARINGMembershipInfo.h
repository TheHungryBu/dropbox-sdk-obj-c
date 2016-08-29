///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAccessLevel;
@class DBXSHARINGMemberPermission;
@class DBXSHARINGMembershipInfo;

/// 
/// The MembershipInfo struct.
/// 
/// The information about a member of the shared content.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGMembershipInfo : NSObject <DBXSerializable> 

/// The access type for this member.
@property (nonatomic, readonly) DBXSHARINGAccessLevel * _Nonnull accessType;

/// The permissions that requesting user has on this member. The set of
/// permissions corresponds to the MemberActions in the request.
@property (nonatomic, readonly) NSArray<DBXSHARINGMemberPermission *> * _Nullable permissions;

/// Suggested name initials for a member.
@property (nonatomic, readonly, copy) NSString * _Nullable initials;

/// True if the member has access from a parent folder.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull isInherited;

/// 
/// Full constructor for the `DBXSHARINGMembershipInfo` struct (exposes all
/// instance variables).
/// 
/// - parameter accessType: The access type for this member.
/// - parameter permissions: The permissions that requesting user has on this
/// member. The set of permissions corresponds to the MemberActions in the
/// request.
/// - parameter initials: Suggested name initials for a member.
/// - parameter isInherited: True if the member has access from a parent folder.
/// 
/// - returns: An initialized `DBXSHARINGMembershipInfo` instance.
/// 
- (nonnull instancetype)initWithAccessType:(DBXSHARINGAccessLevel * _Nonnull)accessType permissions:(NSArray<DBXSHARINGMemberPermission *> * _Nullable)permissions initials:(NSString * _Nullable)initials isInherited:(NSNumber * _Nullable)isInherited;

/// 
/// Convenience constructor for the `DBXSHARINGMembershipInfo` struct (exposes
/// only non-nullable instance variables with no default value).
/// 
/// - parameter accessType: The access type for this member.
/// 
/// - returns: An initialized `DBXSHARINGMembershipInfo` instance.
/// 
- (nonnull instancetype)initWithAccessType:(DBXSHARINGAccessLevel * _Nonnull)accessType;

@end


/// 
/// The serialization class for the MembershipInfo struct.
/// 
@interface DBXSHARINGMembershipInfoSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGMembershipInfo` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGMembershipInfo` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGMembershipInfo` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGMembershipInfo * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGMembershipInfo` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGMembershipInfo` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGMembershipInfo` object.
/// 
+ (DBXSHARINGMembershipInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
