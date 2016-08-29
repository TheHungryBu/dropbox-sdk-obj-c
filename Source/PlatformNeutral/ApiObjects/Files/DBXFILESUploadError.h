///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadError;
@class DBXFILESUploadWriteFailed;

/// 
/// The UploadError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadError : NSObject <DBXSerializable> 

/// The `DBXFILESUploadErrorTag` enum type represents the possible tag states
/// with which the `DBXFILESUploadError` union can exist.
typedef NS_ENUM(NSInteger, DBXFILESUploadErrorTag) {
    /// Unable to save the uploaded contents to a file.
    DBXFILESUploadErrorPath,

    /// (no description).
    DBXFILESUploadErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESUploadErrorTag tag;

/// Unable to save the uploaded contents to a file.
@property (nonatomic, readonly) DBXFILESUploadWriteFailed * _Nonnull path;

/// 
/// Initializes union class with tag state of `Path`.
/// 
/// About the `Path` tag state: Unable to save the uploaded contents to a file.
/// 
/// - parameter path: Unable to save the uploaded contents to a file.
/// 
/// - returns: An initialized `DBXFILESUploadError` instance.
/// 
- (nonnull instancetype)initWithPath:(DBXFILESUploadWriteFailed * _Nonnull)path;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXFILESUploadError` instance.
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
/// The serialization class for the `DBXFILESUploadError` union.
/// 
@interface DBXFILESUploadErrorSerializer : NSObject 

/// 
/// Serializes `DBXFILESUploadError` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESUploadError` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESUploadError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadError * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESUploadError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESUploadError` API object.
/// 
///  - returns: An instantiation of the `DBXFILESUploadError` object.
/// 
+ (DBXFILESUploadError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
