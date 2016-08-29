///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESSharingInfo;

/// 
/// The SharingInfo struct.
/// 
/// Sharing info for a file or folder.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESSharingInfo : NSObject <DBXSerializable> 

/// True if the file or folder is inside a read-only shared folder.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull readOnly;

/// 
/// Full constructor for the `DBXFILESSharingInfo` struct (exposes all instance
/// variables).
/// 
/// - parameter readOnly: True if the file or folder is inside a read-only
/// shared folder.
/// 
/// - returns: An initialized `DBXFILESSharingInfo` instance.
/// 
- (nonnull instancetype)initWithReadOnly:(NSNumber * _Nonnull)readOnly;

@end


/// 
/// The serialization class for the SharingInfo struct.
/// 
@interface DBXFILESSharingInfoSerializer : NSObject 

/// 
/// Serializes `DBXFILESSharingInfo` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESSharingInfo` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESSharingInfo` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESSharingInfo * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESSharingInfo` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESSharingInfo` API object.
/// 
///  - returns: An instantiation of the `DBXFILESSharingInfo` object.
/// 
+ (DBXFILESSharingInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
