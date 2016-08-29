///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadSessionLookupError;
@class DBXFILESUploadSessionOffsetError;

/// 
/// The UploadSessionLookupError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionLookupError : NSObject <DBXSerializable> 

/// The `DBXFILESUploadSessionLookupErrorTag` enum type represents the possible
/// tag states with which the `DBXFILESUploadSessionLookupError` union can
/// exist.
typedef NS_ENUM(NSInteger, DBXFILESUploadSessionLookupErrorTag) {
    /// The upload session id was not found.
    DBXFILESUploadSessionLookupErrorNotFound,

    /// The specified offset was incorrect. See the value for the correct
    /// offset. (This error may occur when a previous request was received and
    /// processed successfully but the client did not receive the response, e.g.
    /// due to a network error.)
    DBXFILESUploadSessionLookupErrorIncorrectOffset,

    /// You are attempting to append data to an upload session that has alread
    /// been closed (i.e. committed).
    DBXFILESUploadSessionLookupErrorClosed,

    /// The session must be closed before calling upload_session/finish_batch.
    DBXFILESUploadSessionLookupErrorNotClosed,

    /// (no description).
    DBXFILESUploadSessionLookupErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESUploadSessionLookupErrorTag tag;

/// The specified offset was incorrect. See the value for the correct offset.
/// (This error may occur when a previous request was received and processed
/// successfully but the client did not receive the response, e.g. due to a
/// network error.)
@property (nonatomic, readonly) DBXFILESUploadSessionOffsetError * _Nonnull incorrectOffset;

/// 
/// Initializes union class with tag state of `NotFound`.
/// 
/// About the `NotFound` tag state: The upload session id was not found.
/// 
/// - returns: An initialized `DBXFILESUploadSessionLookupError` instance.
/// 
- (nonnull instancetype)initWithNotFound;

/// 
/// Initializes union class with tag state of `IncorrectOffset`.
/// 
/// About the `IncorrectOffset` tag state: The specified offset was incorrect.
/// See the value for the correct offset. (This error may occur when a previous
/// request was received and processed successfully but the client did not
/// receive the response, e.g. due to a network error.)
/// 
/// - parameter incorrectOffset: The specified offset was incorrect. See the
/// value for the correct offset. (This error may occur when a previous request
/// was received and processed successfully but the client did not receive the
/// response, e.g. due to a network error.)
/// 
/// - returns: An initialized `DBXFILESUploadSessionLookupError` instance.
/// 
- (nonnull instancetype)initWithIncorrectOffset:(DBXFILESUploadSessionOffsetError * _Nonnull)incorrectOffset;

/// 
/// Initializes union class with tag state of `Closed`.
/// 
/// About the `Closed` tag state: You are attempting to append data to an upload
/// session that has alread been closed (i.e. committed).
/// 
/// - returns: An initialized `DBXFILESUploadSessionLookupError` instance.
/// 
- (nonnull instancetype)initWithClosed;

/// 
/// Initializes union class with tag state of `NotClosed`.
/// 
/// About the `NotClosed` tag state: The session must be closed before calling
/// upload_session/finish_batch.
/// 
/// - returns: An initialized `DBXFILESUploadSessionLookupError` instance.
/// 
- (nonnull instancetype)initWithNotClosed;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXFILESUploadSessionLookupError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `NotFound`.
/// 
/// - returns: Whether the union's current tag state has value `NotFound`.
/// 
- (BOOL)isNotFound;

/// 
/// Retrieves whether the union's current tag state has value `IncorrectOffset`.
/// 
/// - returns: Whether the union's current tag state has value
/// `IncorrectOffset`.
/// 
- (BOOL)isIncorrectOffset;

/// 
/// Retrieves whether the union's current tag state has value `Closed`.
/// 
/// - returns: Whether the union's current tag state has value `Closed`.
/// 
- (BOOL)isClosed;

/// 
/// Retrieves whether the union's current tag state has value `NotClosed`.
/// 
/// - returns: Whether the union's current tag state has value `NotClosed`.
/// 
- (BOOL)isNotClosed;

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
/// The serialization class for the `DBXFILESUploadSessionLookupError` union.
/// 
@interface DBXFILESUploadSessionLookupErrorSerializer : NSObject 

/// 
/// Serializes `DBXFILESUploadSessionLookupError` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESUploadSessionLookupError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionLookupError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionLookupError * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESUploadSessionLookupError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionLookupError` API object.
/// 
///  - returns: An instantiation of the `DBXFILESUploadSessionLookupError`
/// object.
/// 
+ (DBXFILESUploadSessionLookupError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
