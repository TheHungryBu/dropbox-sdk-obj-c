///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupMemberInfo;
@class DBXTEAMGroupsMembersListResult;

/// 
/// The GroupsMembersListResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupsMembersListResult : NSObject <DBXSerializable> 

/// (no description).
@property (nonatomic, readonly) NSArray<DBXTEAMGroupMemberInfo *> * _Nonnull members;

/// Pass the cursor into groupsMembersListContinue to obtain additional group
/// members.
@property (nonatomic, readonly, copy) NSString * _Nonnull cursor;

/// Is true if there are additional group members that have not been returned
/// yet. An additional call to groupsMembersListContinue can retrieve them.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull hasMore;

/// 
/// Full constructor for the `DBXTEAMGroupsMembersListResult` struct (exposes
/// all instance variables).
/// 
/// - parameter members: (no description).
/// - parameter cursor: Pass the cursor into
/// :route:`groups/members/list/continue` to obtain additional group members.
/// - parameter hasMore: Is true if there are additional group members that have
/// not been returned yet. An additional call to
/// :route:`groups/members/list/continue` can retrieve them.
/// 
/// - returns: An initialized `DBXTEAMGroupsMembersListResult` instance.
/// 
- (nonnull instancetype)initWithMembers:(NSArray<DBXTEAMGroupMemberInfo *> * _Nonnull)members cursor:(NSString * _Nonnull)cursor hasMore:(NSNumber * _Nonnull)hasMore;

@end


/// 
/// The serialization class for the GroupsMembersListResult struct.
/// 
@interface DBXTEAMGroupsMembersListResultSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGroupsMembersListResult` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGroupsMembersListResult`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGroupsMembersListResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupsMembersListResult * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGroupsMembersListResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGroupsMembersListResult` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGroupsMembersListResult` object.
/// 
+ (DBXTEAMGroupsMembersListResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
