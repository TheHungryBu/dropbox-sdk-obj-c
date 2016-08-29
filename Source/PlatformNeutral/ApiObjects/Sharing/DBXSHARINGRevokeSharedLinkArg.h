///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGRevokeSharedLinkArg;

/// 
/// The RevokeSharedLinkArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGRevokeSharedLinkArg : NSObject <DBXSerializable> 

/// URL of the shared link.
@property (nonatomic, readonly, copy) NSString * _Nonnull url;

/// 
/// Full constructor for the `DBXSHARINGRevokeSharedLinkArg` struct (exposes all
/// instance variables).
/// 
/// - parameter url: URL of the shared link.
/// 
/// - returns: An initialized `DBXSHARINGRevokeSharedLinkArg` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url;

@end


/// 
/// The serialization class for the RevokeSharedLinkArg struct.
/// 
@interface DBXSHARINGRevokeSharedLinkArgSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGRevokeSharedLinkArg` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGRevokeSharedLinkArg`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGRevokeSharedLinkArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGRevokeSharedLinkArg * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGRevokeSharedLinkArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGRevokeSharedLinkArg` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGRevokeSharedLinkArg` object.
/// 
+ (DBXSHARINGRevokeSharedLinkArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
