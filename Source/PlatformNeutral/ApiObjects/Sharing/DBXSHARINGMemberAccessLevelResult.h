///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAccessLevel;
@class DBXSHARINGMemberAccessLevelResult;
@class DBXSHARINGParentFolderAccessInfo;

/// 
/// The MemberAccessLevelResult struct.
/// 
/// Contains information about a member's access level to content after an
/// operation.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGMemberAccessLevelResult : NSObject <DBXSerializable> 

/// The member still has this level of access to the content through a parent
/// folder.
@property (nonatomic, readonly) DBXSHARINGAccessLevel * _Nullable accessLevel;

/// A localized string with additional information about why the user has this
/// access level to the content.
@property (nonatomic, readonly, copy) NSString * _Nullable warning;

/// The parent folders that a member has access to. The field is present if the
/// user has access to the first parent folder where the member gains access.
@property (nonatomic, readonly) NSArray<DBXSHARINGParentFolderAccessInfo *> * _Nullable accessDetails;

/// 
/// Full constructor for the `DBXSHARINGMemberAccessLevelResult` struct (exposes
/// all instance variables).
/// 
/// - parameter accessLevel: The member still has this level of access to the
/// content through a parent folder.
/// - parameter warning: A localized string with additional information about
/// why the user has this access level to the content.
/// - parameter accessDetails: The parent folders that a member has access to.
/// The field is present if the user has access to the first parent folder where
/// the member gains access.
/// 
/// - returns: An initialized `DBXSHARINGMemberAccessLevelResult` instance.
/// 
- (nonnull instancetype)initWithAccessLevel:(DBXSHARINGAccessLevel * _Nullable)accessLevel warning:(NSString * _Nullable)warning accessDetails:(NSArray<DBXSHARINGParentFolderAccessInfo *> * _Nullable)accessDetails;

/// 
/// Convenience constructor for the `DBXSHARINGMemberAccessLevelResult` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// 
/// - returns: An initialized `DBXSHARINGMemberAccessLevelResult` instance.
/// 
- (nonnull instancetype)init;

@end


/// 
/// The serialization class for the MemberAccessLevelResult struct.
/// 
@interface DBXSHARINGMemberAccessLevelResultSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGMemberAccessLevelResult` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXSHARINGMemberAccessLevelResult` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGMemberAccessLevelResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGMemberAccessLevelResult * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGMemberAccessLevelResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGMemberAccessLevelResult` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGMemberAccessLevelResult`
/// object.
/// 
+ (DBXSHARINGMemberAccessLevelResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
