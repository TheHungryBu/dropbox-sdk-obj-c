///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersListContinueError;

/// 
/// The MembersListContinueError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersListContinueError : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersListContinueErrorTag` enum type represents the possible
/// tag states with which the `DBXTEAMMembersListContinueError` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMMembersListContinueErrorTag) {
    /// The cursor is invalid.
    DBXTEAMMembersListContinueErrorInvalidCursor,

    /// (no description).
    DBXTEAMMembersListContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMembersListContinueErrorTag tag;

/// 
/// Initializes union class with tag state of `InvalidCursor`.
/// 
/// About the `InvalidCursor` tag state: The cursor is invalid.
/// 
/// - returns: An initialized `DBXTEAMMembersListContinueError` instance.
/// 
- (nonnull instancetype)initWithInvalidCursor;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMMembersListContinueError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `InvalidCursor`.
/// 
/// - returns: Whether the union's current tag state has value `InvalidCursor`.
/// 
- (BOOL)isInvalidCursor;

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
/// The serialization class for the `DBXTEAMMembersListContinueError` union.
/// 
@interface DBXTEAMMembersListContinueErrorSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMembersListContinueError` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMembersListContinueError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMembersListContinueError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersListContinueError * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMembersListContinueError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMembersListContinueError` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMembersListContinueError`
/// object.
/// 
+ (DBXTEAMMembersListContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
