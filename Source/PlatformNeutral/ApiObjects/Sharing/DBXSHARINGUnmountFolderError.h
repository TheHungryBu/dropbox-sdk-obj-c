///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGSharedFolderAccessError;
@class DBXSHARINGUnmountFolderError;

/// 
/// The UnmountFolderError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGUnmountFolderError : NSObject <DBXSerializable> 

/// The `DBXSHARINGUnmountFolderErrorTag` enum type represents the possible tag
/// states with which the `DBXSHARINGUnmountFolderError` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGUnmountFolderErrorTag) {
    /// (no description).
    DBXSHARINGUnmountFolderErrorAccessError,

    /// The current user does not have permission to perform this action.
    DBXSHARINGUnmountFolderErrorNoPermission,

    /// The shared folder can't be unmounted. One example where this can occur
    /// is when the shared folder's parent folder is also a shared folder that
    /// resides in the current user's Dropbox.
    DBXSHARINGUnmountFolderErrorNotUnmountable,

    /// (no description).
    DBXSHARINGUnmountFolderErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGUnmountFolderErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharedFolderAccessError * _Nonnull accessError;

/// 
/// Initializes union class with tag state of `AccessError`.
/// 
/// - parameter accessError: (no description).
/// 
/// - returns: An initialized `DBXSHARINGUnmountFolderError` instance.
/// 
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharedFolderAccessError * _Nonnull)accessError;

/// 
/// Initializes union class with tag state of `NoPermission`.
/// 
/// About the `NoPermission` tag state: The current user does not have
/// permission to perform this action.
/// 
/// - returns: An initialized `DBXSHARINGUnmountFolderError` instance.
/// 
- (nonnull instancetype)initWithNoPermission;

/// 
/// Initializes union class with tag state of `NotUnmountable`.
/// 
/// About the `NotUnmountable` tag state: The shared folder can't be unmounted.
/// One example where this can occur is when the shared folder's parent folder
/// is also a shared folder that resides in the current user's Dropbox.
/// 
/// - returns: An initialized `DBXSHARINGUnmountFolderError` instance.
/// 
- (nonnull instancetype)initWithNotUnmountable;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGUnmountFolderError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `AccessError`.
/// 
/// - returns: Whether the union's current tag state has value `AccessError`.
/// 
- (BOOL)isAccessError;

/// 
/// Retrieves whether the union's current tag state has value `NoPermission`.
/// 
/// - returns: Whether the union's current tag state has value `NoPermission`.
/// 
- (BOOL)isNoPermission;

/// 
/// Retrieves whether the union's current tag state has value `NotUnmountable`.
/// 
/// - returns: Whether the union's current tag state has value `NotUnmountable`.
/// 
- (BOOL)isNotUnmountable;

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
/// The serialization class for the `DBXSHARINGUnmountFolderError` union.
/// 
@interface DBXSHARINGUnmountFolderErrorSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGUnmountFolderError` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGUnmountFolderError` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGUnmountFolderError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGUnmountFolderError * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGUnmountFolderError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGUnmountFolderError` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGUnmountFolderError` object.
/// 
+ (DBXSHARINGUnmountFolderError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
