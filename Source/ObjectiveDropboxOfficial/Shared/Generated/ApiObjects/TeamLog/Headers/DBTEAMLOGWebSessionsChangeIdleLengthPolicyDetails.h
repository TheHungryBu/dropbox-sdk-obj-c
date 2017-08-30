///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails;
@class DBTEAMLOGWebSessionsIdleLengthPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WebSessionsChangeIdleLengthPolicyDetails` struct.
///
/// Changed how long team members can be idle while signed in to Dropbox on the
/// web.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New idle length policy.
@property (nonatomic, readonly) DBTEAMLOGWebSessionsIdleLengthPolicy *dNewValue;

/// Previous idle length policy.
@property (nonatomic, readonly) DBTEAMLOGWebSessionsIdleLengthPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New idle length policy.
/// @param previousValue Previous idle length policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGWebSessionsIdleLengthPolicy *)dNewValue
                    previousValue:(DBTEAMLOGWebSessionsIdleLengthPolicy *)previousValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `WebSessionsChangeIdleLengthPolicyDetails`
/// struct.
///
@interface DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` object.
///
+ (DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
