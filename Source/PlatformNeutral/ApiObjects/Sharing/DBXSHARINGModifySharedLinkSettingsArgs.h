///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGModifySharedLinkSettingsArgs;
@class DBXSHARINGSharedLinkSettings;

/// 
/// The ModifySharedLinkSettingsArgs struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGModifySharedLinkSettingsArgs : NSObject <DBXSerializable> 

/// URL of the shared link to change its settings
@property (nonatomic, readonly, copy) NSString * _Nonnull url;

/// Set of settings for the shared link.
@property (nonatomic, readonly) DBXSHARINGSharedLinkSettings * _Nonnull settings;

/// If set to true, removes the expiration of the shared link.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull removeExpiration;

/// 
/// Full constructor for the `DBXSHARINGModifySharedLinkSettingsArgs` struct
/// (exposes all instance variables).
/// 
/// - parameter url: URL of the shared link to change its settings
/// - parameter settings: Set of settings for the shared link.
/// - parameter removeExpiration: If set to true, removes the expiration of the
/// shared link.
/// 
/// - returns: An initialized `DBXSHARINGModifySharedLinkSettingsArgs` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url settings:(DBXSHARINGSharedLinkSettings * _Nonnull)settings removeExpiration:(NSNumber * _Nullable)removeExpiration;

/// 
/// Convenience constructor for the `DBXSHARINGModifySharedLinkSettingsArgs`
/// struct (exposes only non-nullable instance variables with no default value).
/// 
/// - parameter url: URL of the shared link to change its settings
/// - parameter settings: Set of settings for the shared link.
/// 
/// - returns: An initialized `DBXSHARINGModifySharedLinkSettingsArgs` instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url settings:(DBXSHARINGSharedLinkSettings * _Nonnull)settings;

@end


/// 
/// The serialization class for the ModifySharedLinkSettingsArgs struct.
/// 
@interface DBXSHARINGModifySharedLinkSettingsArgsSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGModifySharedLinkSettingsArgs` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXSHARINGModifySharedLinkSettingsArgs` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGModifySharedLinkSettingsArgs` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGModifySharedLinkSettingsArgs * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGModifySharedLinkSettingsArgs` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGModifySharedLinkSettingsArgs` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGModifySharedLinkSettingsArgs`
/// object.
/// 
+ (DBXSHARINGModifySharedLinkSettingsArgs * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
