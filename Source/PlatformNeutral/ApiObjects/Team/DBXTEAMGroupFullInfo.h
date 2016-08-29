///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMCOMMONGroupSummary.h"

@class DBXTEAMCOMMONGroupManagementType;
@class DBXTEAMGroupFullInfo;
@class DBXTEAMGroupMemberInfo;

/// 
/// The GroupFullInfo struct.
/// 
/// Full description of a group.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupFullInfo : DBXTEAMCOMMONGroupSummary <DBXSerializable> 

/// List of group members.
@property (nonatomic, readonly) NSArray<DBXTEAMGroupMemberInfo *> * _Nullable members;

/// The group creation time as a UTC timestamp in milliseconds since the Unix
/// epoch.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull created;

/// 
/// Full constructor for the `DBXTEAMGroupFullInfo` struct (exposes all instance
/// variables).
/// 
/// - parameter groupName: (no description).
/// - parameter groupId: (no description).
/// - parameter groupManagementType: Who is allowed to manage the group.
/// - parameter created: The group creation time as a UTC timestamp in
/// milliseconds since the Unix epoch.
/// - parameter groupExternalId: External ID of group. This is an arbitrary ID
/// that an admin can attach to a group.
/// - parameter memberCount: The number of members in the group.
/// - parameter members: List of group members.
/// 
/// - returns: An initialized `DBXTEAMGroupFullInfo` instance.
/// 
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DBXTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType created:(NSNumber * _Nonnull)created groupExternalId:(NSString * _Nullable)groupExternalId memberCount:(NSNumber * _Nullable)memberCount members:(NSArray<DBXTEAMGroupMemberInfo *> * _Nullable)members;

/// 
/// Convenience constructor for the `DBXTEAMGroupFullInfo` struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// - parameter groupName: (no description).
/// - parameter groupId: (no description).
/// - parameter groupManagementType: Who is allowed to manage the group.
/// - parameter created: The group creation time as a UTC timestamp in
/// milliseconds since the Unix epoch.
/// 
/// - returns: An initialized `DBXTEAMGroupFullInfo` instance.
/// 
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DBXTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType created:(NSNumber * _Nonnull)created;

@end


/// 
/// The serialization class for the GroupFullInfo struct.
/// 
@interface DBXTEAMGroupFullInfoSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGroupFullInfo` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGroupFullInfo` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGroupFullInfo` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupFullInfo * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGroupFullInfo` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGroupFullInfo` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGroupFullInfo` object.
/// 
+ (DBXTEAMGroupFullInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
