///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupAccessType;

/// 
/// The GroupAccessType union.
/// 
/// Role of a user in group.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupAccessType : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupAccessTypeTag` enum type represents the possible tag states
/// with which the `DBXTEAMGroupAccessType` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMGroupAccessTypeTag) {
    /// User is a member of the group, but has no special permissions.
    DBXTEAMGroupAccessTypeMember,

    /// User can rename the group, and add/remove members.
    DBXTEAMGroupAccessTypeOwner,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupAccessTypeTag tag;

/// 
/// Initializes union class with tag state of `Member`.
/// 
/// About the `Member` tag state: User is a member of the group, but has no
/// special permissions.
/// 
/// - returns: An initialized `DBXTEAMGroupAccessType` instance.
/// 
- (nonnull instancetype)initWithMember;

/// 
/// Initializes union class with tag state of `Owner`.
/// 
/// About the `Owner` tag state: User can rename the group, and add/remove
/// members.
/// 
/// - returns: An initialized `DBXTEAMGroupAccessType` instance.
/// 
- (nonnull instancetype)initWithOwner;

/// 
/// Retrieves whether the union's current tag state has value `Member`.
/// 
/// - returns: Whether the union's current tag state has value `Member`.
/// 
- (BOOL)isMember;

/// 
/// Retrieves whether the union's current tag state has value `Owner`.
/// 
/// - returns: Whether the union's current tag state has value `Owner`.
/// 
- (BOOL)isOwner;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupAccessType` union.
/// 
@interface DBXTEAMGroupAccessTypeSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGroupAccessType` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGroupAccessType` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGroupAccessType` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupAccessType * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGroupAccessType` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGroupAccessType` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGroupAccessType` object.
/// 
+ (DBXTEAMGroupAccessType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
