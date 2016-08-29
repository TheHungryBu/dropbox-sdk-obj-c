///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMRevokeLinkedApiAppArg;
@class DBXTEAMRevokeLinkedApiAppBatchArg;

/// 
/// The RevokeLinkedApiAppBatchArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMRevokeLinkedApiAppBatchArg : NSObject <DBXSerializable> 

/// (no description).
@property (nonatomic, readonly) NSArray<DBXTEAMRevokeLinkedApiAppArg *> * _Nonnull revokeLinkedApp;

/// 
/// Full constructor for the `DBXTEAMRevokeLinkedApiAppBatchArg` struct (exposes
/// all instance variables).
/// 
/// - parameter revokeLinkedApp: (no description).
/// 
/// - returns: An initialized `DBXTEAMRevokeLinkedApiAppBatchArg` instance.
/// 
- (nonnull instancetype)initWithRevokeLinkedApp:(NSArray<DBXTEAMRevokeLinkedApiAppArg *> * _Nonnull)revokeLinkedApp;

@end


/// 
/// The serialization class for the RevokeLinkedApiAppBatchArg struct.
/// 
@interface DBXTEAMRevokeLinkedApiAppBatchArgSerializer : NSObject 

/// 
/// Serializes `DBXTEAMRevokeLinkedApiAppBatchArg` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXTEAMRevokeLinkedApiAppBatchArg` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMRevokeLinkedApiAppBatchArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMRevokeLinkedApiAppBatchArg * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMRevokeLinkedApiAppBatchArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMRevokeLinkedApiAppBatchArg` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMRevokeLinkedApiAppBatchArg`
/// object.
/// 
+ (DBXTEAMRevokeLinkedApiAppBatchArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
