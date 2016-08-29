///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMIncludeMembersArg;

/// 
/// The IncludeMembersArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMIncludeMembersArg : NSObject <DBXSerializable> 

/// Whether to return the list of members in the group.  Note that the default
/// value will cause all the group members  to be returned in the response. This
/// may take a long time for large groups.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull returnMembers;

/// 
/// Full constructor for the `DBXTEAMIncludeMembersArg` struct (exposes all
/// instance variables).
/// 
/// - parameter returnMembers: Whether to return the list of members in the
/// group.  Note that the default value will cause all the group members  to be
/// returned in the response. This may take a long time for large groups.
/// 
/// - returns: An initialized `DBXTEAMIncludeMembersArg` instance.
/// 
- (nonnull instancetype)initWithReturnMembers:(NSNumber * _Nullable)returnMembers;

/// 
/// Convenience constructor for the `DBXTEAMIncludeMembersArg` struct (exposes
/// only non-nullable instance variables with no default value).
/// 
/// 
/// - returns: An initialized `DBXTEAMIncludeMembersArg` instance.
/// 
- (nonnull instancetype)init;

@end


/// 
/// The serialization class for the IncludeMembersArg struct.
/// 
@interface DBXTEAMIncludeMembersArgSerializer : NSObject 

/// 
/// Serializes `DBXTEAMIncludeMembersArg` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMIncludeMembersArg` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMIncludeMembersArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMIncludeMembersArg * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMIncludeMembersArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMIncludeMembersArg` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMIncludeMembersArg` object.
/// 
+ (DBXTEAMIncludeMembersArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
