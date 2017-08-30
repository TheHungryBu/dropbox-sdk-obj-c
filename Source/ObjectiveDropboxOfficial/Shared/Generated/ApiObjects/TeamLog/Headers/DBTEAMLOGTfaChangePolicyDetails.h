///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTfaChangePolicyDetails;
@class DBTEAMLOGTfaPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TfaChangePolicyDetails` struct.
///
/// Change two-step verification policy for the team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTfaChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New change policy.
@property (nonatomic, readonly) DBTEAMLOGTfaPolicy *dNewValue;

/// Previous change policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGTfaPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New change policy.
/// @param previousValue Previous change policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGTfaPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGTfaPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New change policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGTfaPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TfaChangePolicyDetails` struct.
///
@interface DBTEAMLOGTfaChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTfaChangePolicyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGTfaChangePolicyDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaChangePolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGTfaChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGTfaChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTfaChangePolicyDetails` object.
///
+ (DBTEAMLOGTfaChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
