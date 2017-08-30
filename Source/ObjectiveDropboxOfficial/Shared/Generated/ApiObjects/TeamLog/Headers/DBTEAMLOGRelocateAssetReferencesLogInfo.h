///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGRelocateAssetReferencesLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocateAssetReferencesLogInfo` struct.
///
/// Provides the indices of the source asset and the destination asset for a
/// relocate action.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGRelocateAssetReferencesLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Source asset index.
@property (nonatomic, readonly) NSNumber *srcIndex;

/// Destination asset index.
@property (nonatomic, readonly) NSNumber *destIndex;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param srcIndex Source asset index.
/// @param destIndex Destination asset index.
///
/// @return An initialized instance.
///
- (instancetype)initWithSrcIndex:(NSNumber *)srcIndex destIndex:(NSNumber *)destIndex;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RelocateAssetReferencesLogInfo` struct.
///
@interface DBTEAMLOGRelocateAssetReferencesLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGRelocateAssetReferencesLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGRelocateAssetReferencesLogInfo`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGRelocateAssetReferencesLogInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGRelocateAssetReferencesLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGRelocateAssetReferencesLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGRelocateAssetReferencesLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGRelocateAssetReferencesLogInfo`
/// object.
///
+ (DBTEAMLOGRelocateAssetReferencesLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
