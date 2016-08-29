///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadSessionStartResult;

/// 
/// The UploadSessionStartResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionStartResult : NSObject <DBXSerializable> 

/// A unique identifier for the upload session. Pass this to
/// uploadSessionAppendV2 and uploadSessionFinish.
@property (nonatomic, readonly, copy) NSString * _Nonnull sessionId;

/// 
/// Full constructor for the `DBXFILESUploadSessionStartResult` struct (exposes
/// all instance variables).
/// 
/// - parameter sessionId: A unique identifier for the upload session. Pass this
/// to :route:`upload_session/append_v2` and :route:`upload_session/finish`.
/// 
/// - returns: An initialized `DBXFILESUploadSessionStartResult` instance.
/// 
- (nonnull instancetype)initWithSessionId:(NSString * _Nonnull)sessionId;

@end


/// 
/// The serialization class for the UploadSessionStartResult struct.
/// 
@interface DBXFILESUploadSessionStartResultSerializer : NSObject 

/// 
/// Serializes `DBXFILESUploadSessionStartResult` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESUploadSessionStartResult`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionStartResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionStartResult * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESUploadSessionStartResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionStartResult` API object.
/// 
///  - returns: An instantiation of the `DBXFILESUploadSessionStartResult`
/// object.
/// 
+ (DBXFILESUploadSessionStartResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
