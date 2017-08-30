///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileRequestSendDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestSendDetails` struct.
///
/// Sent file request to users via email.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestSendDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// File request title.
@property (nonatomic, readonly, copy) NSString *requestTitle;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param requestTitle File request title.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestTitle:(NSString *)requestTitle;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileRequestSendDetails` struct.
///
@interface DBTEAMLOGFileRequestSendDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestSendDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileRequestSendDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestSendDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGFileRequestSendDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestSendDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestSendDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestSendDetails` object.
///
+ (DBTEAMLOGFileRequestSendDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
