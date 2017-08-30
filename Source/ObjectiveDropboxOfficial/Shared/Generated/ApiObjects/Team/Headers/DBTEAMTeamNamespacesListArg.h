///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamNamespacesListArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamNamespacesListArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamNamespacesListArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The approximate maximum number of results to return per request. This limit
/// may be exceeded.
@property (nonatomic, readonly) NSNumber *limit;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param limit The approximate maximum number of results to return per
/// request. This limit may be exceeded.
///
/// @return An initialized instance.
///
- (instancetype)initWithLimit:(nullable NSNumber *)limit;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamNamespacesListArg` struct.
///
@interface DBTEAMTeamNamespacesListArgSerializer : NSObject

///
/// Serializes `DBTEAMTeamNamespacesListArg` instances.
///
/// @param instance An instance of the `DBTEAMTeamNamespacesListArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamNamespacesListArg` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMTeamNamespacesListArg *)instance;

///
/// Deserializes `DBTEAMTeamNamespacesListArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamNamespacesListArg` API object.
///
/// @return An instantiation of the `DBTEAMTeamNamespacesListArg` object.
///
+ (DBTEAMTeamNamespacesListArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
