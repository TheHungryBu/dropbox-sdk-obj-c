///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESListFolderLongpollError;

/// 
/// The ListFolderLongpollError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESListFolderLongpollError : NSObject <DBXSerializable> 

/// The `DBXFILESListFolderLongpollErrorTag` enum type represents the possible
/// tag states with which the `DBXFILESListFolderLongpollError` union can exist.
typedef NS_ENUM(NSInteger, DBXFILESListFolderLongpollErrorTag) {
    /// Indicates that the cursor has been invalidated. Call listFolder to
    /// obtain a new cursor.
    DBXFILESListFolderLongpollErrorReset,

    /// (no description).
    DBXFILESListFolderLongpollErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESListFolderLongpollErrorTag tag;

/// 
/// Initializes union class with tag state of `Reset`.
/// 
/// About the `Reset` tag state: Indicates that the cursor has been invalidated.
/// Call :route:`list_folder` to obtain a new cursor.
/// 
/// - returns: An initialized `DBXFILESListFolderLongpollError` instance.
/// 
- (nonnull instancetype)initWithReset;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXFILESListFolderLongpollError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `Reset`.
/// 
/// - returns: Whether the union's current tag state has value `Reset`.
/// 
- (BOOL)isReset;

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
/// The serialization class for the `DBXFILESListFolderLongpollError` union.
/// 
@interface DBXFILESListFolderLongpollErrorSerializer : NSObject 

/// 
/// Serializes `DBXFILESListFolderLongpollError` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESListFolderLongpollError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESListFolderLongpollError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESListFolderLongpollError * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESListFolderLongpollError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESListFolderLongpollError` API object.
/// 
///  - returns: An instantiation of the `DBXFILESListFolderLongpollError`
/// object.
/// 
+ (DBXFILESListFolderLongpollError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
