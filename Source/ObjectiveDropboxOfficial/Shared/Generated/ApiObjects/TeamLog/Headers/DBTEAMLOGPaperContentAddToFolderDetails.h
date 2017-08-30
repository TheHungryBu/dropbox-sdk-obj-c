///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperContentAddToFolderDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperContentAddToFolderDetails` struct.
///
/// Added Paper doc or folder to a folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperContentAddToFolderDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Parent asset index.
@property (nonatomic, readonly) NSNumber *parentIndex;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param targetIndex Target asset index.
/// @param parentIndex Parent asset index.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
                      targetIndex:(NSNumber *)targetIndex
                      parentIndex:(NSNumber *)parentIndex;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperContentAddToFolderDetails` struct.
///
@interface DBTEAMLOGPaperContentAddToFolderDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperContentAddToFolderDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGPaperContentAddToFolderDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperContentAddToFolderDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGPaperContentAddToFolderDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperContentAddToFolderDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperContentAddToFolderDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperContentAddToFolderDetails`
/// object.
///
+ (DBTEAMLOGPaperContentAddToFolderDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
