///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMStorageBucket;

/// 
/// The StorageBucket struct.
/// 
/// Describes the number of users in a specific storage bucket.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMStorageBucket : NSObject <DBXSerializable> 

/// The name of the storage bucket. For example, '1G' is a bucket of users with
/// storage size up to 1 Giga.
@property (nonatomic, readonly, copy) NSString * _Nonnull bucket;

/// The number of people whose storage is in the range of this storage bucket.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull users;

/// 
/// Full constructor for the `DBXTEAMStorageBucket` struct (exposes all instance
/// variables).
/// 
/// - parameter bucket: The name of the storage bucket. For example, '1G' is a
/// bucket of users with storage size up to 1 Giga.
/// - parameter users: The number of people whose storage is in the range of
/// this storage bucket.
/// 
/// - returns: An initialized `DBXTEAMStorageBucket` instance.
/// 
- (nonnull instancetype)initWithBucket:(NSString * _Nonnull)bucket users:(NSNumber * _Nonnull)users;

@end


/// 
/// The serialization class for the StorageBucket struct.
/// 
@interface DBXTEAMStorageBucketSerializer : NSObject 

/// 
/// Serializes `DBXTEAMStorageBucket` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMStorageBucket` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMStorageBucket` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMStorageBucket * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMStorageBucket` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMStorageBucket` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMStorageBucket` object.
/// 
+ (DBXTEAMStorageBucket * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
