///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupFullInfo;
@class DBXTEAMGroupsGetInfoItem;

/// 
/// The GroupsGetInfoItem union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupsGetInfoItem : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupsGetInfoItemTag` enum type represents the possible tag
/// states with which the `DBXTEAMGroupsGetInfoItem` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMGroupsGetInfoItemTag) {
    /// An ID that was provided as a parameter to groupsGetInfo, and did not
    /// match a corresponding group. The ID can be a group ID, or an external
    /// ID, depending on how the method was called.
    DBXTEAMGroupsGetInfoItemIdNotFound,

    /// Info about a group.
    DBXTEAMGroupsGetInfoItemGroupInfo,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupsGetInfoItemTag tag;

/// An ID that was provided as a parameter to groupsGetInfo, and did not match a
/// corresponding group. The ID can be a group ID, or an external ID, depending
/// on how the method was called.
@property (nonatomic, readonly, copy) NSString * _Nonnull idNotFound;

/// Info about a group.
@property (nonatomic, readonly) DBXTEAMGroupFullInfo * _Nonnull groupInfo;

/// 
/// Initializes union class with tag state of `IdNotFound`.
/// 
/// About the `IdNotFound` tag state: An ID that was provided as a parameter to
/// :route:`groups/get_info`, and did not match a corresponding group. The ID
/// can be a group ID, or an external ID, depending on how the method was
/// called.
/// 
/// - parameter idNotFound: An ID that was provided as a parameter to
/// :route:`groups/get_info`, and did not match a corresponding group. The ID
/// can be a group ID, or an external ID, depending on how the method was
/// called.
/// 
/// - returns: An initialized `DBXTEAMGroupsGetInfoItem` instance.
/// 
- (nonnull instancetype)initWithIdNotFound:(NSString * _Nonnull)idNotFound;

/// 
/// Initializes union class with tag state of `GroupInfo`.
/// 
/// About the `GroupInfo` tag state: Info about a group.
/// 
/// - parameter groupInfo: Info about a group.
/// 
/// - returns: An initialized `DBXTEAMGroupsGetInfoItem` instance.
/// 
- (nonnull instancetype)initWithGroupInfo:(DBXTEAMGroupFullInfo * _Nonnull)groupInfo;

/// 
/// Retrieves whether the union's current tag state has value `IdNotFound`.
/// 
/// - returns: Whether the union's current tag state has value `IdNotFound`.
/// 
- (BOOL)isIdNotFound;

/// 
/// Retrieves whether the union's current tag state has value `GroupInfo`.
/// 
/// - returns: Whether the union's current tag state has value `GroupInfo`.
/// 
- (BOOL)isGroupInfo;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupsGetInfoItem` union.
/// 
@interface DBXTEAMGroupsGetInfoItemSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGroupsGetInfoItem` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGroupsGetInfoItem` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGroupsGetInfoItem` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupsGetInfoItem * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGroupsGetInfoItem` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGroupsGetInfoItem` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGroupsGetInfoItem` object.
/// 
+ (DBXTEAMGroupsGetInfoItem * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
