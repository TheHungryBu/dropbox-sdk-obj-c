///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAccessLevel;
@class DBXSHARINGAddMember;
@class DBXSHARINGMemberSelector;

/// 
/// The AddMember struct.
/// 
/// The member and type of access the member should have when added to a shared
/// folder.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGAddMember : NSObject <DBXSerializable> 

/// The member to add to the shared folder.
@property (nonatomic, readonly) DBXSHARINGMemberSelector * _Nonnull member;

/// The access level to grant member to the shared folder.  owner in AccessLevel
/// is disallowed.
@property (nonatomic, readonly) DBXSHARINGAccessLevel * _Nonnull accessLevel;

/// 
/// Full constructor for the `DBXSHARINGAddMember` struct (exposes all instance
/// variables).
/// 
/// - parameter member: The member to add to the shared folder.
/// - parameter accessLevel: The access level to grant :field:`member` to the
/// shared folder.  :field:`AccessLevel.owner` is disallowed.
/// 
/// - returns: An initialized `DBXSHARINGAddMember` instance.
/// 
- (nonnull instancetype)initWithMember:(DBXSHARINGMemberSelector * _Nonnull)member accessLevel:(DBXSHARINGAccessLevel * _Nullable)accessLevel;

/// 
/// Convenience constructor for the `DBXSHARINGAddMember` struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// - parameter member: The member to add to the shared folder.
/// 
/// - returns: An initialized `DBXSHARINGAddMember` instance.
/// 
- (nonnull instancetype)initWithMember:(DBXSHARINGMemberSelector * _Nonnull)member;

@end


/// 
/// The serialization class for the AddMember struct.
/// 
@interface DBXSHARINGAddMemberSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGAddMember` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGAddMember` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGAddMember` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGAddMember * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGAddMember` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGAddMember` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGAddMember` object.
/// 
+ (DBXSHARINGAddMember * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
