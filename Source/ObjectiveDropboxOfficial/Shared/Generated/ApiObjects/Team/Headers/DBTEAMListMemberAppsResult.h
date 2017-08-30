///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMApiApp;
@class DBTEAMListMemberAppsResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListMemberAppsResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListMemberAppsResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of third party applications linked by this team member
@property (nonatomic, readonly) NSArray<DBTEAMApiApp *> *linkedApiApps;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param linkedApiApps List of third party applications linked by this team
/// member
///
/// @return An initialized instance.
///
- (instancetype)initWithLinkedApiApps:(NSArray<DBTEAMApiApp *> *)linkedApiApps;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListMemberAppsResult` struct.
///
@interface DBTEAMListMemberAppsResultSerializer : NSObject

///
/// Serializes `DBTEAMListMemberAppsResult` instances.
///
/// @param instance An instance of the `DBTEAMListMemberAppsResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListMemberAppsResult` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMListMemberAppsResult *)instance;

///
/// Deserializes `DBTEAMListMemberAppsResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListMemberAppsResult` API object.
///
/// @return An instantiation of the `DBTEAMListMemberAppsResult` object.
///
+ (DBTEAMListMemberAppsResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
