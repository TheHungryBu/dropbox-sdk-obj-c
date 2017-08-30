///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPROPERTIESModifyPropertyTemplateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ModifyPropertyTemplateError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPROPERTIESModifyPropertyTemplateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPROPERTIESModifyPropertyTemplateErrorTag` enum type represents the
/// possible tag states with which the `DBPROPERTIESModifyPropertyTemplateError`
/// union can exist.
typedef NS_ENUM(NSInteger, DBPROPERTIESModifyPropertyTemplateErrorTag) {
  /// Property template does not exist for given identifier.
  DBPROPERTIESModifyPropertyTemplateErrorTemplateNotFound,

  /// You do not have the permissions to modify this property template.
  DBPROPERTIESModifyPropertyTemplateErrorRestrictedContent,

  /// (no description).
  DBPROPERTIESModifyPropertyTemplateErrorOther,

  /// A property field name already exists in the template.
  DBPROPERTIESModifyPropertyTemplateErrorConflictingPropertyNames,

  /// There are too many properties in the changed template. The maximum
  /// number of properties per template is 32.
  DBPROPERTIESModifyPropertyTemplateErrorTooManyProperties,

  /// There are too many templates for the team.
  DBPROPERTIESModifyPropertyTemplateErrorTooManyTemplates,

  /// The template name, description or field names is too large.
  DBPROPERTIESModifyPropertyTemplateErrorTemplateAttributeTooLarge,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPROPERTIESModifyPropertyTemplateErrorTag tag;

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

///
/// Initializes union class with tag state of "conflicting_property_names".
///
/// Description of the "conflicting_property_names" tag state: A property field
/// name already exists in the template.
///
/// @return An initialized instance.
///
- (instancetype)initWithConflictingPropertyNames;

///
/// Initializes union class with tag state of "too_many_properties".
///
/// Description of the "too_many_properties" tag state: There are too many
/// properties in the changed template. The maximum number of properties per
/// template is 32.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyProperties;

///
/// Initializes union class with tag state of "too_many_templates".
///
/// Description of the "too_many_templates" tag state: There are too many
/// templates for the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyTemplates;

///
/// Initializes union class with tag state of "template_attribute_too_large".
///
/// Description of the "template_attribute_too_large" tag state: The template
/// name, description or field names is too large.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateAttributeTooLarge;

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
/// Retrieves whether the union's current tag state has value
/// "conflicting_property_names".
///
/// @return Whether the union's current tag state has value
/// "conflicting_property_names".
///
- (BOOL)isConflictingPropertyNames;

///
/// Retrieves whether the union's current tag state has value
/// "too_many_properties".
///
/// @return Whether the union's current tag state has value
/// "too_many_properties".
///
- (BOOL)isTooManyProperties;

///
/// Retrieves whether the union's current tag state has value
/// "too_many_templates".
///
/// @return Whether the union's current tag state has value
/// "too_many_templates".
///
- (BOOL)isTooManyTemplates;

///
/// Retrieves whether the union's current tag state has value
/// "template_attribute_too_large".
///
/// @return Whether the union's current tag state has value
/// "template_attribute_too_large".
///
- (BOOL)isTemplateAttributeTooLarge;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPROPERTIESModifyPropertyTemplateError`
/// union.
///
@interface DBPROPERTIESModifyPropertyTemplateErrorSerializer : NSObject

///
/// Serializes `DBPROPERTIESModifyPropertyTemplateError` instances.
///
/// @param instance An instance of the `DBPROPERTIESModifyPropertyTemplateError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPROPERTIESModifyPropertyTemplateError` API object.
///
+ (nullable NSDictionary *)serialize:(DBPROPERTIESModifyPropertyTemplateError *)instance;

///
/// Deserializes `DBPROPERTIESModifyPropertyTemplateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPROPERTIESModifyPropertyTemplateError` API object.
///
/// @return An instantiation of the `DBPROPERTIESModifyPropertyTemplateError`
/// object.
///
+ (DBPROPERTIESModifyPropertyTemplateError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
