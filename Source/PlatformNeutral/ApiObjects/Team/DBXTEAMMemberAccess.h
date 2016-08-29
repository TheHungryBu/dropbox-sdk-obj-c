///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupAccessType;
@class DBXTEAMMemberAccess;
@class DBXTEAMUserSelectorArg;

/// 
/// The MemberAccess struct.
/// 
/// Specify access type a member should have when joined to a group.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMemberAccess : NSObject <DBXSerializable> 

/// Identity of a user.
@property (nonatomic, readonly) DBXTEAMUserSelectorArg * _Nonnull user;

/// Access type.
@property (nonatomic, readonly) DBXTEAMGroupAccessType * _Nonnull accessType;

/// 
/// Full constructor for the `DBXTEAMMemberAccess` struct (exposes all instance
/// variables).
/// 
/// - parameter user: Identity of a user.
/// - parameter accessType: Access type.
/// 
/// - returns: An initialized `DBXTEAMMemberAccess` instance.
/// 
- (nonnull instancetype)initWithUser:(DBXTEAMUserSelectorArg * _Nonnull)user accessType:(DBXTEAMGroupAccessType * _Nonnull)accessType;

@end


/// 
/// The serialization class for the MemberAccess struct.
/// 
@interface DBXTEAMMemberAccessSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMemberAccess` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMemberAccess` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMemberAccess` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMemberAccess * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMemberAccess` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMemberAccess` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMemberAccess` object.
/// 
+ (DBXTEAMMemberAccess * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
