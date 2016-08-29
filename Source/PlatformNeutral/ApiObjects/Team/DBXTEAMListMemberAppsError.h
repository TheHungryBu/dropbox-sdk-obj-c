///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListMemberAppsError;

/// 
/// The ListMemberAppsError union.
/// 
/// Error returned by linkedAppsListMemberLinkedApps.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMListMemberAppsError : NSObject <DBXSerializable> 

/// The `DBXTEAMListMemberAppsErrorTag` enum type represents the possible tag
/// states with which the `DBXTEAMListMemberAppsError` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMListMemberAppsErrorTag) {
    /// Member not found.
    DBXTEAMListMemberAppsErrorMemberNotFound,

    /// (no description).
    DBXTEAMListMemberAppsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMListMemberAppsErrorTag tag;

/// 
/// Initializes union class with tag state of `MemberNotFound`.
/// 
/// About the `MemberNotFound` tag state: Member not found.
/// 
/// - returns: An initialized `DBXTEAMListMemberAppsError` instance.
/// 
- (nonnull instancetype)initWithMemberNotFound;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMListMemberAppsError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `MemberNotFound`.
/// 
/// - returns: Whether the union's current tag state has value `MemberNotFound`.
/// 
- (BOOL)isMemberNotFound;

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
/// The serialization class for the `DBXTEAMListMemberAppsError` union.
/// 
@interface DBXTEAMListMemberAppsErrorSerializer : NSObject 

/// 
/// Serializes `DBXTEAMListMemberAppsError` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMListMemberAppsError` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMListMemberAppsError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListMemberAppsError * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMListMemberAppsError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMListMemberAppsError` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMListMemberAppsError` object.
/// 
+ (DBXTEAMListMemberAppsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
