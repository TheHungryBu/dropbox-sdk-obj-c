///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedFolderMountDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderMountDetails` struct.
///
/// Added a shared folder to own Dropbox.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderMountDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy) NSString *originalFolderName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex originalFolderName:(NSString *)originalFolderName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderMountDetails` struct.
///
@interface DBTEAMLOGSharedFolderMountDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderMountDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharedFolderMountDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderMountDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedFolderMountDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderMountDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderMountDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedFolderMountDetails` object.
///
+ (DBTEAMLOGSharedFolderMountDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
