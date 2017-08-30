///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceApprovalsRolloutPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceApprovalsRolloutPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceApprovalsRolloutPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGDeviceApprovalsRolloutPolicyTag` enum type represents the
/// possible tag states with which the `DBTEAMLOGDeviceApprovalsRolloutPolicy`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGDeviceApprovalsRolloutPolicyTag) {
  /// (no description).
  DBTEAMLOGDeviceApprovalsRolloutPolicyRemoveOldest,

  /// (no description).
  DBTEAMLOGDeviceApprovalsRolloutPolicyRemoveAll,

  /// (no description).
  DBTEAMLOGDeviceApprovalsRolloutPolicyAddException,

  /// (no description).
  DBTEAMLOGDeviceApprovalsRolloutPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGDeviceApprovalsRolloutPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "remove_oldest".
///
/// @return An initialized instance.
///
- (instancetype)initWithRemoveOldest;

///
/// Initializes union class with tag state of "remove_all".
///
/// @return An initialized instance.
///
- (instancetype)initWithRemoveAll;

///
/// Initializes union class with tag state of "add_exception".
///
/// @return An initialized instance.
///
- (instancetype)initWithAddException;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "remove_oldest".
///
/// @return Whether the union's current tag state has value "remove_oldest".
///
- (BOOL)isRemoveOldest;

///
/// Retrieves whether the union's current tag state has value "remove_all".
///
/// @return Whether the union's current tag state has value "remove_all".
///
- (BOOL)isRemoveAll;

///
/// Retrieves whether the union's current tag state has value "add_exception".
///
/// @return Whether the union's current tag state has value "add_exception".
///
- (BOOL)isAddException;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGDeviceApprovalsRolloutPolicy`
/// union.
///
@interface DBTEAMLOGDeviceApprovalsRolloutPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceApprovalsRolloutPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceApprovalsRolloutPolicy`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceApprovalsRolloutPolicy` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGDeviceApprovalsRolloutPolicy *)instance;

///
/// Deserializes `DBTEAMLOGDeviceApprovalsRolloutPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceApprovalsRolloutPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceApprovalsRolloutPolicy`
/// object.
///
+ (DBTEAMLOGDeviceApprovalsRolloutPolicy *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
