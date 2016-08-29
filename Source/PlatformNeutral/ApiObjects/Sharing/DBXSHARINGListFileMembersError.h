///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersError;
@class DBXSHARINGSharingFileAccessError;
@class DBXSHARINGSharingUserError;

/// 
/// The ListFileMembersError union.
/// 
/// Error for listFileMembers.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListFileMembersError : NSObject <DBXSerializable> 

/// The `DBXSHARINGListFileMembersErrorTag` enum type represents the possible
/// tag states with which the `DBXSHARINGListFileMembersError` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGListFileMembersErrorTag) {
    /// (no description).
    DBXSHARINGListFileMembersErrorUserError,

    /// (no description).
    DBXSHARINGListFileMembersErrorAccessError,

    /// (no description).
    DBXSHARINGListFileMembersErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGListFileMembersErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharingUserError * _Nonnull userError;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharingFileAccessError * _Nonnull accessError;

/// 
/// Initializes union class with tag state of `UserError`.
/// 
/// - parameter userError: (no description).
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersError` instance.
/// 
- (nonnull instancetype)initWithUserError:(DBXSHARINGSharingUserError * _Nonnull)userError;

/// 
/// Initializes union class with tag state of `AccessError`.
/// 
/// - parameter accessError: (no description).
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersError` instance.
/// 
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError * _Nonnull)accessError;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `UserError`.
/// 
/// - returns: Whether the union's current tag state has value `UserError`.
/// 
- (BOOL)isUserError;

/// 
/// Retrieves whether the union's current tag state has value `AccessError`.
/// 
/// - returns: Whether the union's current tag state has value `AccessError`.
/// 
- (BOOL)isAccessError;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGListFileMembersError` union.
/// 
@interface DBXSHARINGListFileMembersErrorSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGListFileMembersError` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGListFileMembersError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersError * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGListFileMembersError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersError` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGListFileMembersError` object.
/// 
+ (DBXSHARINGListFileMembersError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
