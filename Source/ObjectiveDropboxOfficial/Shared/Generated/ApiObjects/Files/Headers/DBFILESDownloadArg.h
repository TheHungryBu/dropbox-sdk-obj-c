///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESDownloadArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DownloadArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDownloadArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path of the file to download.
@property (nonatomic, readonly, copy) NSString *path;

/// Deprecated. Please specify revision in path instead.
@property (nonatomic, readonly, copy, nullable) NSString *rev;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path of the file to download.
/// @param rev Deprecated. Please specify revision in path instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path rev:(nullable NSString *)rev;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param path The path of the file to download.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DownloadArg` struct.
///
@interface DBFILESDownloadArgSerializer : NSObject

///
/// Serializes `DBFILESDownloadArg` instances.
///
/// @param instance An instance of the `DBFILESDownloadArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDownloadArg` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESDownloadArg *)instance;

///
/// Deserializes `DBFILESDownloadArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDownloadArg` API object.
///
/// @return An instantiation of the `DBFILESDownloadArg` object.
///
+ (DBFILESDownloadArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
