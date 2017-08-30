///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileLikeCommentDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileLikeCommentDetails` struct.
///
/// Liked a file comment.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileLikeCommentDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Comment text. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *commentText;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param commentText Comment text. Might be missing due to historical data
/// gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex commentText:(nullable NSString *)commentText;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileLikeCommentDetails` struct.
///
@interface DBTEAMLOGFileLikeCommentDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileLikeCommentDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileLikeCommentDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileLikeCommentDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGFileLikeCommentDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileLikeCommentDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileLikeCommentDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileLikeCommentDetails` object.
///
+ (DBTEAMLOGFileLikeCommentDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
