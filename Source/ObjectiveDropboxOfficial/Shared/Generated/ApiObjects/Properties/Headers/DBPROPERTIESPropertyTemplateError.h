///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPROPERTIESPropertyTemplateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PropertyTemplateError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPROPERTIESPropertyTemplateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPROPERTIESPropertyTemplateErrorTag` enum type represents the possible
/// tag states with which the `DBPROPERTIESPropertyTemplateError` union can
/// exist.
typedef NS_ENUM(NSInteger, DBPROPERTIESPropertyTemplateErrorTag) {
  /// Property template does not exist for given identifier.
  DBPROPERTIESPropertyTemplateErrorTemplateNotFound,

  /// You do not have the permissions to modify this property template.
  DBPROPERTIESPropertyTemplateErrorRestrictedContent,

  /// (no description).
  DBPROPERTIESPropertyTemplateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPROPERTIESPropertyTemplateErrorTag tag;

/// Property template does not exist for given identifier. @note Ensure the
/// `isTemplateNotFound` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *templateNotFound;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "template_not_found".
///
/// Description of the "template_not_found" tag state: Property template does
/// not exist for given identifier.
///
/// @param templateNotFound Property template does not exist for given
/// identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateNotFound:(NSString *)templateNotFound;

///
/// Initializes union class with tag state of "restricted_content".
///
/// Description of the "restricted_content" tag state: You do not have the
/// permissions to modify this property template.
///
/// @return An initialized instance.
///
- (instancetype)initWithRestrictedContent;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "template_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `templateNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "template_not_found".
///
- (BOOL)isTemplateNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_content".
///
/// @return Whether the union's current tag state has value
/// "restricted_content".
///
- (BOOL)isRestrictedContent;

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
/// The serialization class for the `DBPROPERTIESPropertyTemplateError` union.
///
@interface DBPROPERTIESPropertyTemplateErrorSerializer : NSObject

///
/// Serializes `DBPROPERTIESPropertyTemplateError` instances.
///
/// @param instance An instance of the `DBPROPERTIESPropertyTemplateError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPROPERTIESPropertyTemplateError` API object.
///
+ (nullable NSDictionary *)serialize:(DBPROPERTIESPropertyTemplateError *)instance;

///
/// Deserializes `DBPROPERTIESPropertyTemplateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPROPERTIESPropertyTemplateError` API object.
///
/// @return An instantiation of the `DBPROPERTIESPropertyTemplateError` object.
///
+ (DBPROPERTIESPropertyTemplateError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
