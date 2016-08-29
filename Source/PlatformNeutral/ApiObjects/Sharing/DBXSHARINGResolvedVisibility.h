///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGResolvedVisibility;

/// 
/// The ResolvedVisibility union.
/// 
/// The actual access permissions values of shared links after taking into
/// account user preferences and the team and shared folder settings. Check the
/// RequestedVisibility for more info on the possible visibility values that can
/// be set by the shared link's owner.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGResolvedVisibility : NSObject <DBXSerializable> 

/// The `DBXSHARINGResolvedVisibilityTag` enum type represents the possible tag
/// states with which the `DBXSHARINGResolvedVisibility` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGResolvedVisibilityTag) {
    /// Anyone who has received the link can access it. No login required.
    DBXSHARINGResolvedVisibilityPublic,

    /// Only members of the same team can access the link. Login is required.
    DBXSHARINGResolvedVisibilityTeamOnly,

    /// A link-specific password is required to access the link. Login is not
    /// required.
    DBXSHARINGResolvedVisibilityPassword,

    /// Only members of the same team who have the link-specific password can
    /// access the link. Login is required.
    DBXSHARINGResolvedVisibilityTeamAndPassword,

    /// Only members of the shared folder containing the linked file can access
    /// the link. Login is required.
    DBXSHARINGResolvedVisibilitySharedFolderOnly,

    /// (no description).
    DBXSHARINGResolvedVisibilityOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGResolvedVisibilityTag tag;

/// 
/// Initializes union class with tag state of `Public`.
/// 
/// About the `Public` tag state: Anyone who has received the link can access
/// it. No login required.
/// 
/// - returns: An initialized `DBXSHARINGResolvedVisibility` instance.
/// 
- (nonnull instancetype)initWithPublic;

/// 
/// Initializes union class with tag state of `TeamOnly`.
/// 
/// About the `TeamOnly` tag state: Only members of the same team can access the
/// link. Login is required.
/// 
/// - returns: An initialized `DBXSHARINGResolvedVisibility` instance.
/// 
- (nonnull instancetype)initWithTeamOnly;

/// 
/// Initializes union class with tag state of `Password`.
/// 
/// About the `Password` tag state: A link-specific password is required to
/// access the link. Login is not required.
/// 
/// - returns: An initialized `DBXSHARINGResolvedVisibility` instance.
/// 
- (nonnull instancetype)initWithPassword;

/// 
/// Initializes union class with tag state of `TeamAndPassword`.
/// 
/// About the `TeamAndPassword` tag state: Only members of the same team who
/// have the link-specific password can access the link. Login is required.
/// 
/// - returns: An initialized `DBXSHARINGResolvedVisibility` instance.
/// 
- (nonnull instancetype)initWithTeamAndPassword;

/// 
/// Initializes union class with tag state of `SharedFolderOnly`.
/// 
/// About the `SharedFolderOnly` tag state: Only members of the shared folder
/// containing the linked file can access the link. Login is required.
/// 
/// - returns: An initialized `DBXSHARINGResolvedVisibility` instance.
/// 
- (nonnull instancetype)initWithSharedFolderOnly;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGResolvedVisibility` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `Public`.
/// 
/// - returns: Whether the union's current tag state has value `Public`.
/// 
- (BOOL)isPublic;

/// 
/// Retrieves whether the union's current tag state has value `TeamOnly`.
/// 
/// - returns: Whether the union's current tag state has value `TeamOnly`.
/// 
- (BOOL)isTeamOnly;

/// 
/// Retrieves whether the union's current tag state has value `Password`.
/// 
/// - returns: Whether the union's current tag state has value `Password`.
/// 
- (BOOL)isPassword;

/// 
/// Retrieves whether the union's current tag state has value `TeamAndPassword`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TeamAndPassword`.
/// 
- (BOOL)isTeamAndPassword;

/// 
/// Retrieves whether the union's current tag state has value
/// `SharedFolderOnly`.
/// 
/// - returns: Whether the union's current tag state has value
/// `SharedFolderOnly`.
/// 
- (BOOL)isSharedFolderOnly;

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
/// The serialization class for the `DBXSHARINGResolvedVisibility` union.
/// 
@interface DBXSHARINGResolvedVisibilitySerializer : NSObject 

/// 
/// Serializes `DBXSHARINGResolvedVisibility` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGResolvedVisibility` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGResolvedVisibility` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGResolvedVisibility * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGResolvedVisibility` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGResolvedVisibility` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGResolvedVisibility` object.
/// 
+ (DBXSHARINGResolvedVisibility * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
