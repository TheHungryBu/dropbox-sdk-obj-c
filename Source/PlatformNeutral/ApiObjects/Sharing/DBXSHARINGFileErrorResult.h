///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGFileErrorResult;

/// 
/// The FileErrorResult union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGFileErrorResult : NSObject <DBXSerializable> 

/// The `DBXSHARINGFileErrorResultTag` enum type represents the possible tag
/// states with which the `DBXSHARINGFileErrorResult` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGFileErrorResultTag) {
    /// File specified by id was not found.
    DBXSHARINGFileErrorResultFileNotFoundError,

    /// User does not have permission to take the specified action on the file.
    DBXSHARINGFileErrorResultInvalidFileActionError,

    /// User does not have permission to access file specified by file.Id.
    DBXSHARINGFileErrorResultPermissionDeniedError,

    /// (no description).
    DBXSHARINGFileErrorResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGFileErrorResultTag tag;

/// File specified by id was not found.
@property (nonatomic, readonly, copy) NSString * _Nonnull fileNotFoundError;

/// User does not have permission to take the specified action on the file.
@property (nonatomic, readonly, copy) NSString * _Nonnull invalidFileActionError;

/// User does not have permission to access file specified by file.Id.
@property (nonatomic, readonly, copy) NSString * _Nonnull permissionDeniedError;

/// 
/// Initializes union class with tag state of `FileNotFoundError`.
/// 
/// About the `FileNotFoundError` tag state: File specified by id was not found.
/// 
/// - parameter fileNotFoundError: File specified by id was not found.
/// 
/// - returns: An initialized `DBXSHARINGFileErrorResult` instance.
/// 
- (nonnull instancetype)initWithFileNotFoundError:(NSString * _Nonnull)fileNotFoundError;

/// 
/// Initializes union class with tag state of `InvalidFileActionError`.
/// 
/// About the `InvalidFileActionError` tag state: User does not have permission
/// to take the specified action on the file.
/// 
/// - parameter invalidFileActionError: User does not have permission to take
/// the specified action on the file.
/// 
/// - returns: An initialized `DBXSHARINGFileErrorResult` instance.
/// 
- (nonnull instancetype)initWithInvalidFileActionError:(NSString * _Nonnull)invalidFileActionError;

/// 
/// Initializes union class with tag state of `PermissionDeniedError`.
/// 
/// About the `PermissionDeniedError` tag state: User does not have permission
/// to access file specified by file.Id.
/// 
/// - parameter permissionDeniedError: User does not have permission to access
/// file specified by file.Id.
/// 
/// - returns: An initialized `DBXSHARINGFileErrorResult` instance.
/// 
- (nonnull instancetype)initWithPermissionDeniedError:(NSString * _Nonnull)permissionDeniedError;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGFileErrorResult` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value
/// `FileNotFoundError`.
/// 
/// - returns: Whether the union's current tag state has value
/// `FileNotFoundError`.
/// 
- (BOOL)isFileNotFoundError;

/// 
/// Retrieves whether the union's current tag state has value
/// `InvalidFileActionError`.
/// 
/// - returns: Whether the union's current tag state has value
/// `InvalidFileActionError`.
/// 
- (BOOL)isInvalidFileActionError;

/// 
/// Retrieves whether the union's current tag state has value
/// `PermissionDeniedError`.
/// 
/// - returns: Whether the union's current tag state has value
/// `PermissionDeniedError`.
/// 
- (BOOL)isPermissionDeniedError;

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
/// The serialization class for the `DBXSHARINGFileErrorResult` union.
/// 
@interface DBXSHARINGFileErrorResultSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGFileErrorResult` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGFileErrorResult` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGFileErrorResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFileErrorResult * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGFileErrorResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGFileErrorResult` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGFileErrorResult` object.
/// 
+ (DBXSHARINGFileErrorResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
