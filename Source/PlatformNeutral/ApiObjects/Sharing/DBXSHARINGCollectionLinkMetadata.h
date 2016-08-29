///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXSHARINGLinkMetadata.h"

@class DBXSHARINGCollectionLinkMetadata;
@class DBXSHARINGVisibility;

/// 
/// The CollectionLinkMetadata struct.
/// 
/// Metadata for a collection-based shared link.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGCollectionLinkMetadata : DBXSHARINGLinkMetadata <DBXSerializable> 

/// 
/// Full constructor for the `DBXSHARINGCollectionLinkMetadata` struct (exposes
/// all instance variables).
/// 
/// - parameter url: URL of the shared link.
/// - parameter visibility: Who can access the link.
/// - parameter expires: Expiration time, if set. By default the link won't
/// expire.
/// 
/// - returns: An initialized `DBXSHARINGCollectionLinkMetadata` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DBXSHARINGVisibility * _Nonnull)visibility expires:(NSDate * _Nullable)expires;

/// 
/// Convenience constructor for the `DBXSHARINGCollectionLinkMetadata` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// - parameter url: URL of the shared link.
/// - parameter visibility: Who can access the link.
/// 
/// - returns: An initialized `DBXSHARINGCollectionLinkMetadata` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DBXSHARINGVisibility * _Nonnull)visibility;

@end


/// 
/// The serialization class for the CollectionLinkMetadata struct.
/// 
@interface DBXSHARINGCollectionLinkMetadataSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGCollectionLinkMetadata` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGCollectionLinkMetadata`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGCollectionLinkMetadata` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGCollectionLinkMetadata * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGCollectionLinkMetadata` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGCollectionLinkMetadata` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGCollectionLinkMetadata`
/// object.
/// 
+ (DBXSHARINGCollectionLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
