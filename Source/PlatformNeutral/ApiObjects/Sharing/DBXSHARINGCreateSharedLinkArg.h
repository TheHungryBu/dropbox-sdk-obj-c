///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGCreateSharedLinkArg;
@class DBXSHARINGPendingUploadMode;

/// 
/// The CreateSharedLinkArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGCreateSharedLinkArg : NSObject <DBXSerializable> 

/// The path to share.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

/// Whether to return a shortened URL.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull shortUrl;

/// If it's okay to share a path that does not yet exist, set this to either
/// file in PendingUploadMode or folder in PendingUploadMode to indicate whether
/// to assume it's a file or folder.
@property (nonatomic, readonly) DBXSHARINGPendingUploadMode * _Nullable pendingUpload;

/// 
/// Full constructor for the `DBXSHARINGCreateSharedLinkArg` struct (exposes all
/// instance variables).
/// 
/// - parameter path: The path to share.
/// - parameter shortUrl: Whether to return a shortened URL.
/// - parameter pendingUpload: If it's okay to share a path that does not yet
/// exist, set this to either :field:`PendingUploadMode.file` or
/// :field:`PendingUploadMode.folder` to indicate whether to assume it's a file
/// or folder.
/// 
/// - returns: An initialized `DBXSHARINGCreateSharedLinkArg` instance.
/// 
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path shortUrl:(NSNumber * _Nullable)shortUrl pendingUpload:(DBXSHARINGPendingUploadMode * _Nullable)pendingUpload;

/// 
/// Convenience constructor for the `DBXSHARINGCreateSharedLinkArg` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// - parameter path: The path to share.
/// 
/// - returns: An initialized `DBXSHARINGCreateSharedLinkArg` instance.
/// 
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end


/// 
/// The serialization class for the CreateSharedLinkArg struct.
/// 
@interface DBXSHARINGCreateSharedLinkArgSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGCreateSharedLinkArg` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGCreateSharedLinkArg`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGCreateSharedLinkArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGCreateSharedLinkArg * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGCreateSharedLinkArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGCreateSharedLinkArg` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGCreateSharedLinkArg` object.
/// 
+ (DBXSHARINGCreateSharedLinkArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
