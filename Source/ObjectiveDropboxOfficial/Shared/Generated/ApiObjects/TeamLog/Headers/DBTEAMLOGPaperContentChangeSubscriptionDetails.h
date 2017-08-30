///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperContentChangeSubscriptionDetails;
@class DBTEAMLOGPaperTaggedValue;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperContentChangeSubscriptionDetails` struct.
///
/// Followed or unfollowed a Paper doc or folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperContentChangeSubscriptionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// New subscription level.
@property (nonatomic, readonly) DBTEAMLOGPaperTaggedValue *dNewSubscriptionLevel;

/// Previous subscription level. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGPaperTaggedValue *previousSubscriptionLevel;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param dNewSubscriptionLevel New subscription level.
/// @param previousSubscriptionLevel Previous subscription level. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
            dNewSubscriptionLevel:(DBTEAMLOGPaperTaggedValue *)dNewSubscriptionLevel
        previousSubscriptionLevel:(nullable DBTEAMLOGPaperTaggedValue *)previousSubscriptionLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param eventUuid Event unique identifier.
/// @param dNewSubscriptionLevel New subscription level.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
            dNewSubscriptionLevel:(DBTEAMLOGPaperTaggedValue *)dNewSubscriptionLevel;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperContentChangeSubscriptionDetails`
/// struct.
///
@interface DBTEAMLOGPaperContentChangeSubscriptionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperContentChangeSubscriptionDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperContentChangeSubscriptionDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperContentChangeSubscriptionDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGPaperContentChangeSubscriptionDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperContentChangeSubscriptionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperContentChangeSubscriptionDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGPaperContentChangeSubscriptionDetails` object.
///
+ (DBTEAMLOGPaperContentChangeSubscriptionDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
