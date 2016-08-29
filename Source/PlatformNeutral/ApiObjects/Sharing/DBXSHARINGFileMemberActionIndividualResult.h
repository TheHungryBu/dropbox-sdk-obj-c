///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAccessLevel;
@class DBXSHARINGFileMemberActionError;
@class DBXSHARINGFileMemberActionIndividualResult;

/// 
/// The FileMemberActionIndividualResult union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGFileMemberActionIndividualResult : NSObject <DBXSerializable> 

/// The `DBXSHARINGFileMemberActionIndividualResultTag` enum type represents the
/// possible tag states with which the
/// `DBXSHARINGFileMemberActionIndividualResult` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGFileMemberActionIndividualResultTag) {
    /// Member was successfully removed from this file. If AccessLevel is given,
    /// the member still has access via a parent shared folder.
    DBXSHARINGFileMemberActionIndividualResultSuccess,

    /// User was not able to perform this action.
    DBXSHARINGFileMemberActionIndividualResultMemberError,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGFileMemberActionIndividualResultTag tag;

/// Member was successfully removed from this file. If AccessLevel is given, the
/// member still has access via a parent shared folder.
@property (nonatomic, readonly) DBXSHARINGAccessLevel * _Nullable success;

/// User was not able to perform this action.
@property (nonatomic, readonly) DBXSHARINGFileMemberActionError * _Nonnull memberError;

/// 
/// Initializes union class with tag state of `Success`.
/// 
/// About the `Success` tag state: Member was successfully removed from this
/// file. If AccessLevel is given, the member still has access via a parent
/// shared folder.
/// 
/// - parameter success: Member was successfully removed from this file. If
/// AccessLevel is given, the member still has access via a parent shared
/// folder.
/// 
/// - returns: An initialized `DBXSHARINGFileMemberActionIndividualResult`
/// instance.
/// 
- (nonnull instancetype)initWithSuccess:(DBXSHARINGAccessLevel * _Nullable)success;

/// 
/// Initializes union class with tag state of `MemberError`.
/// 
/// About the `MemberError` tag state: User was not able to perform this action.
/// 
/// - parameter memberError: User was not able to perform this action.
/// 
/// - returns: An initialized `DBXSHARINGFileMemberActionIndividualResult`
/// instance.
/// 
- (nonnull instancetype)initWithMemberError:(DBXSHARINGFileMemberActionError * _Nonnull)memberError;

/// 
/// Retrieves whether the union's current tag state has value `Success`.
/// 
/// - returns: Whether the union's current tag state has value `Success`.
/// 
- (BOOL)isSuccess;

/// 
/// Retrieves whether the union's current tag state has value `MemberError`.
/// 
/// - returns: Whether the union's current tag state has value `MemberError`.
/// 
- (BOOL)isMemberError;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGFileMemberActionIndividualResult`
/// union.
/// 
@interface DBXSHARINGFileMemberActionIndividualResultSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGFileMemberActionIndividualResult` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXSHARINGFileMemberActionIndividualResult` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGFileMemberActionIndividualResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFileMemberActionIndividualResult * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGFileMemberActionIndividualResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGFileMemberActionIndividualResult` API object.
/// 
///  - returns: An instantiation of the
/// `DBXSHARINGFileMemberActionIndividualResult` object.
/// 
+ (DBXSHARINGFileMemberActionIndividualResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
