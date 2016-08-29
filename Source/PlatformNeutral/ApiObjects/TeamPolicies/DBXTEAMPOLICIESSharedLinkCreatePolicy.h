///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMPOLICIESSharedLinkCreatePolicy;

/// 
/// The SharedLinkCreatePolicy union.
/// 
/// Policy governing the visibility of newly created shared links.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMPOLICIESSharedLinkCreatePolicy : NSObject <DBXSerializable> 

/// The `DBXTEAMPOLICIESSharedLinkCreatePolicyTag` enum type represents the
/// possible tag states with which the `DBXTEAMPOLICIESSharedLinkCreatePolicy`
/// union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMPOLICIESSharedLinkCreatePolicyTag) {
    /// By default, anyone can access newly created shared links. No login will
    /// be required to access the shared links unless overridden.
    DBXTEAMPOLICIESSharedLinkCreatePolicyDefaultPublic,

    /// By default, only members of the same team can access newly created
    /// shared links. Login will be required to access the shared links unless
    /// overridden.
    DBXTEAMPOLICIESSharedLinkCreatePolicyDefaultTeamOnly,

    /// Only members of the same team can access newly created shared links.
    /// Login will be required to access the shared links.
    DBXTEAMPOLICIESSharedLinkCreatePolicyTeamOnly,

    /// (no description).
    DBXTEAMPOLICIESSharedLinkCreatePolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMPOLICIESSharedLinkCreatePolicyTag tag;

/// 
/// Initializes union class with tag state of `DefaultPublic`.
/// 
/// About the `DefaultPublic` tag state: By default, anyone can access newly
/// created shared links. No login will be required to access the shared links
/// unless overridden.
/// 
/// - returns: An initialized `DBXTEAMPOLICIESSharedLinkCreatePolicy` instance.
/// 
- (nonnull instancetype)initWithDefaultPublic;

/// 
/// Initializes union class with tag state of `DefaultTeamOnly`.
/// 
/// About the `DefaultTeamOnly` tag state: By default, only members of the same
/// team can access newly created shared links. Login will be required to access
/// the shared links unless overridden.
/// 
/// - returns: An initialized `DBXTEAMPOLICIESSharedLinkCreatePolicy` instance.
/// 
- (nonnull instancetype)initWithDefaultTeamOnly;

/// 
/// Initializes union class with tag state of `TeamOnly`.
/// 
/// About the `TeamOnly` tag state: Only members of the same team can access
/// newly created shared links. Login will be required to access the shared
/// links.
/// 
/// - returns: An initialized `DBXTEAMPOLICIESSharedLinkCreatePolicy` instance.
/// 
- (nonnull instancetype)initWithTeamOnly;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMPOLICIESSharedLinkCreatePolicy` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `DefaultPublic`.
/// 
/// - returns: Whether the union's current tag state has value `DefaultPublic`.
/// 
- (BOOL)isDefaultPublic;

/// 
/// Retrieves whether the union's current tag state has value `DefaultTeamOnly`.
/// 
/// - returns: Whether the union's current tag state has value
/// `DefaultTeamOnly`.
/// 
- (BOOL)isDefaultTeamOnly;

/// 
/// Retrieves whether the union's current tag state has value `TeamOnly`.
/// 
/// - returns: Whether the union's current tag state has value `TeamOnly`.
/// 
- (BOOL)isTeamOnly;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMPOLICIESSharedLinkCreatePolicy`
/// union.
/// 
@interface DBXTEAMPOLICIESSharedLinkCreatePolicySerializer : NSObject 

/// 
/// Serializes `DBXTEAMPOLICIESSharedLinkCreatePolicy` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXTEAMPOLICIESSharedLinkCreatePolicy` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMPOLICIESSharedLinkCreatePolicy` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMPOLICIESSharedLinkCreatePolicy * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMPOLICIESSharedLinkCreatePolicy` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMPOLICIESSharedLinkCreatePolicy` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMPOLICIESSharedLinkCreatePolicy`
/// object.
/// 
+ (DBXTEAMPOLICIESSharedLinkCreatePolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
