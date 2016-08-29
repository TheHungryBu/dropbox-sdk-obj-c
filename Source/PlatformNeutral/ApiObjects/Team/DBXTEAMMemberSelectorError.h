///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMemberSelectorError;

/// 
/// The MemberSelectorError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMemberSelectorError : NSObject <DBXSerializable> 

/// The `DBXTEAMMemberSelectorErrorTag` enum type represents the possible tag
/// states with which the `DBXTEAMMemberSelectorError` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMMemberSelectorErrorTag) {
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBXTEAMMemberSelectorErrorUserNotFound,

    /// The user is not a member of the team.
    DBXTEAMMemberSelectorErrorUserNotInTeam,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMemberSelectorErrorTag tag;

/// 
/// Initializes union class with tag state of `UserNotFound`.
/// 
/// About the `UserNotFound` tag state: No matching user found. The provided
/// team_member_id, email, or external_id does not exist on this team.
/// 
/// - returns: An initialized `DBXTEAMMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithUserNotFound;

/// 
/// Initializes union class with tag state of `UserNotInTeam`.
/// 
/// About the `UserNotInTeam` tag state: The user is not a member of the team.
/// 
/// - returns: An initialized `DBXTEAMMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithUserNotInTeam;

/// 
/// Retrieves whether the union's current tag state has value `UserNotFound`.
/// 
/// - returns: Whether the union's current tag state has value `UserNotFound`.
/// 
- (BOOL)isUserNotFound;

/// 
/// Retrieves whether the union's current tag state has value `UserNotInTeam`.
/// 
/// - returns: Whether the union's current tag state has value `UserNotInTeam`.
/// 
- (BOOL)isUserNotInTeam;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMMemberSelectorError` union.
/// 
@interface DBXTEAMMemberSelectorErrorSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMemberSelectorError` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMemberSelectorError` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMemberSelectorError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMemberSelectorError * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMemberSelectorError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMemberSelectorError` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMemberSelectorError` object.
/// 
+ (DBXTEAMMemberSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
