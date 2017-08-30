///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentRelinquishMembershipDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentRelinquishMembershipDetails` struct.
///
/// Left the membership of a shared file or folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentRelinquishMembershipDetails : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `SharedContentRelinquishMembershipDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentRelinquishMembershipDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentRelinquishMembershipDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentRelinquishMembershipDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRelinquishMembershipDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentRelinquishMembershipDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentRelinquishMembershipDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRelinquishMembershipDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentRelinquishMembershipDetails` object.
///
+ (DBTEAMLOGSharedContentRelinquishMembershipDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
