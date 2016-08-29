///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESLookupError;
@class DBXSHARINGCreateSharedLinkError;

/// 
/// The CreateSharedLinkError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGCreateSharedLinkError : NSObject <DBXSerializable> 

/// The `DBXSHARINGCreateSharedLinkErrorTag` enum type represents the possible
/// tag states with which the `DBXSHARINGCreateSharedLinkError` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGCreateSharedLinkErrorTag) {
    /// (no description).
    DBXSHARINGCreateSharedLinkErrorPath,

    /// (no description).
    DBXSHARINGCreateSharedLinkErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGCreateSharedLinkErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// 
/// Initializes union class with tag state of `Path`.
/// 
/// - parameter path: (no description).
/// 
/// - returns: An initialized `DBXSHARINGCreateSharedLinkError` instance.
/// 
- (nonnull instancetype)initWithPath:(DBXFILESLookupError * _Nonnull)path;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGCreateSharedLinkError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `Path`.
/// 
/// - returns: Whether the union's current tag state has value `Path`.
/// 
- (BOOL)isPath;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGCreateSharedLinkError` union.
/// 
@interface DBXSHARINGCreateSharedLinkErrorSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGCreateSharedLinkError` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGCreateSharedLinkError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGCreateSharedLinkError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGCreateSharedLinkError * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGCreateSharedLinkError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGCreateSharedLinkError` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGCreateSharedLinkError`
/// object.
/// 
+ (DBXSHARINGCreateSharedLinkError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
