///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGLinkMetadata;
@class DBXSHARINGVisibility;

/// 
/// The LinkMetadata struct.
/// 
/// Metadata for a shared link. This can be either a PathLinkMetadata or
/// CollectionLinkMetadata.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGLinkMetadata : NSObject <DBXSerializable> 

/// URL of the shared link.
@property (nonatomic, readonly, copy) NSString * _Nonnull url;

/// Who can access the link.
@property (nonatomic, readonly) DBXSHARINGVisibility * _Nonnull visibility;

/// Expiration time, if set. By default the link won't expire.
@property (nonatomic, readonly) NSDate * _Nullable expires;

/// 
/// Full constructor for the `DBXSHARINGLinkMetadata` struct (exposes all
/// instance variables).
/// 
/// - parameter url: URL of the shared link.
/// - parameter visibility: Who can access the link.
/// - parameter expires: Expiration time, if set. By default the link won't
/// expire.
/// 
/// - returns: An initialized `DBXSHARINGLinkMetadata` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DBXSHARINGVisibility * _Nonnull)visibility expires:(NSDate * _Nullable)expires;

/// 
/// Convenience constructor for the `DBXSHARINGLinkMetadata` struct (exposes
/// only non-nullable instance variables with no default value).
/// 
/// - parameter url: URL of the shared link.
/// - parameter visibility: Who can access the link.
/// 
/// - returns: An initialized `DBXSHARINGLinkMetadata` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DBXSHARINGVisibility * _Nonnull)visibility;

@end


/// 
/// The serialization class for the LinkMetadata struct.
/// 
@interface DBXSHARINGLinkMetadataSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGLinkMetadata` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGLinkMetadata` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGLinkMetadata` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGLinkMetadata * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGLinkMetadata` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGLinkMetadata` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGLinkMetadata` object.
/// 
+ (DBXSHARINGLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
