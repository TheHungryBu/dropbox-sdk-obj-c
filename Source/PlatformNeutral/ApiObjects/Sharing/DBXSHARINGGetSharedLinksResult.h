///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGGetSharedLinksResult;
@class DBXSHARINGLinkMetadata;

/// 
/// The GetSharedLinksResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGGetSharedLinksResult : NSObject <DBXSerializable> 

/// Shared links applicable to the path argument.
@property (nonatomic, readonly) NSArray<DBXSHARINGLinkMetadata *> * _Nonnull links;

/// 
/// Full constructor for the `DBXSHARINGGetSharedLinksResult` struct (exposes
/// all instance variables).
/// 
/// - parameter links: Shared links applicable to the path argument.
/// 
/// - returns: An initialized `DBXSHARINGGetSharedLinksResult` instance.
/// 
- (nonnull instancetype)initWithLinks:(NSArray<DBXSHARINGLinkMetadata *> * _Nonnull)links;

@end


/// 
/// The serialization class for the GetSharedLinksResult struct.
/// 
@interface DBXSHARINGGetSharedLinksResultSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGGetSharedLinksResult` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGGetSharedLinksResult`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGGetSharedLinksResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGGetSharedLinksResult * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGGetSharedLinksResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGGetSharedLinksResult` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGGetSharedLinksResult` object.
/// 
+ (DBXSHARINGGetSharedLinksResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
