///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMAdminTier;
@class DBXTEAMMembersSetPermissionsResult;

/// 
/// The MembersSetPermissionsResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersSetPermissionsResult : NSObject <DBXSerializable> 

/// The member ID of the user to which the change was applied.
@property (nonatomic, readonly, copy) NSString * _Nonnull teamMemberId;

/// The role after the change.
@property (nonatomic, readonly) DBXTEAMAdminTier * _Nonnull role;

/// 
/// Full constructor for the `DBXTEAMMembersSetPermissionsResult` struct
/// (exposes all instance variables).
/// 
/// - parameter teamMemberId: The member ID of the user to which the change was
/// applied.
/// - parameter role: The role after the change.
/// 
/// - returns: An initialized `DBXTEAMMembersSetPermissionsResult` instance.
/// 
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId role:(DBXTEAMAdminTier * _Nonnull)role;

@end


/// 
/// The serialization class for the MembersSetPermissionsResult struct.
/// 
@interface DBXTEAMMembersSetPermissionsResultSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMembersSetPermissionsResult` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXTEAMMembersSetPermissionsResult` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMembersSetPermissionsResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersSetPermissionsResult * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMembersSetPermissionsResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMembersSetPermissionsResult` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMembersSetPermissionsResult`
/// object.
/// 
+ (DBXTEAMMembersSetPermissionsResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
