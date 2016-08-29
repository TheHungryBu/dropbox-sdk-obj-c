///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMRevokeLinkedAppError;
@class DBXTEAMRevokeLinkedAppStatus;

/// 
/// The RevokeLinkedAppStatus struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMRevokeLinkedAppStatus : NSObject <DBXSerializable> 

/// Result of the revoking request
@property (nonatomic, readonly, copy) NSNumber * _Nonnull success;

/// The error cause in case of a failure
@property (nonatomic, readonly) DBXTEAMRevokeLinkedAppError * _Nullable errorType;

/// 
/// Full constructor for the `DBXTEAMRevokeLinkedAppStatus` struct (exposes all
/// instance variables).
/// 
/// - parameter success: Result of the revoking request
/// - parameter errorType: The error cause in case of a failure
/// 
/// - returns: An initialized `DBXTEAMRevokeLinkedAppStatus` instance.
/// 
- (nonnull instancetype)initWithSuccess:(NSNumber * _Nonnull)success errorType:(DBXTEAMRevokeLinkedAppError * _Nullable)errorType;

/// 
/// Convenience constructor for the `DBXTEAMRevokeLinkedAppStatus` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// - parameter success: Result of the revoking request
/// 
/// - returns: An initialized `DBXTEAMRevokeLinkedAppStatus` instance.
/// 
- (nonnull instancetype)initWithSuccess:(NSNumber * _Nonnull)success;

@end


/// 
/// The serialization class for the RevokeLinkedAppStatus struct.
/// 
@interface DBXTEAMRevokeLinkedAppStatusSerializer : NSObject 

/// 
/// Serializes `DBXTEAMRevokeLinkedAppStatus` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMRevokeLinkedAppStatus` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMRevokeLinkedAppStatus` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMRevokeLinkedAppStatus * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMRevokeLinkedAppStatus` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMRevokeLinkedAppStatus` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMRevokeLinkedAppStatus` object.
/// 
+ (DBXTEAMRevokeLinkedAppStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
