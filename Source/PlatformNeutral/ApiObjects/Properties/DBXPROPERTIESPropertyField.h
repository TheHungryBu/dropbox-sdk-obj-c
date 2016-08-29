///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXPROPERTIESPropertyField;

/// 
/// The PropertyField struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXPROPERTIESPropertyField : NSObject <DBXSerializable> 

/// This is the name or key of a custom property in a property template. File
/// property names can be up to 256 bytes.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;

/// Value of a custom property attached to a file. Values can be up to 1024
/// bytes.
@property (nonatomic, readonly, copy) NSString * _Nonnull value;

/// 
/// Full constructor for the `DBXPROPERTIESPropertyField` struct (exposes all
/// instance variables).
/// 
/// - parameter name: This is the name or key of a custom property in a property
/// template. File property names can be up to 256 bytes.
/// - parameter value: Value of a custom property attached to a file. Values can
/// be up to 1024 bytes.
/// 
/// - returns: An initialized `DBXPROPERTIESPropertyField` instance.
/// 
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name value:(NSString * _Nonnull)value;

@end


/// 
/// The serialization class for the PropertyField struct.
/// 
@interface DBXPROPERTIESPropertyFieldSerializer : NSObject 

/// 
/// Serializes `DBXPROPERTIESPropertyField` instances.
/// 
///  - parameter instance: An instance of the `DBXPROPERTIESPropertyField` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXPROPERTIESPropertyField` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXPROPERTIESPropertyField * _Nonnull)instance;

/// 
/// Deserializes `DBXPROPERTIESPropertyField` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXPROPERTIESPropertyField` API object.
/// 
///  - returns: An instantiation of the `DBXPROPERTIESPropertyField` object.
/// 
+ (DBXPROPERTIESPropertyField * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
