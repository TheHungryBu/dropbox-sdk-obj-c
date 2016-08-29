///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESCreateFolderArg;

/// 
/// The CreateFolderArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESCreateFolderArg : NSObject <DBXSerializable> 

/// Path in the user's Dropbox to create.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

/// 
/// Full constructor for the `DBXFILESCreateFolderArg` struct (exposes all
/// instance variables).
/// 
/// - parameter path: Path in the user's Dropbox to create.
/// 
/// - returns: An initialized `DBXFILESCreateFolderArg` instance.
/// 
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end


/// 
/// The serialization class for the CreateFolderArg struct.
/// 
@interface DBXFILESCreateFolderArgSerializer : NSObject 

/// 
/// Serializes `DBXFILESCreateFolderArg` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESCreateFolderArg` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESCreateFolderArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESCreateFolderArg * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESCreateFolderArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESCreateFolderArg` API object.
/// 
///  - returns: An instantiation of the `DBXFILESCreateFolderArg` object.
/// 
+ (DBXFILESCreateFolderArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
