///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersCountResult;
@class DBXSHARINGListFileMembersIndividualResult;
@class DBXSHARINGSharingFileAccessError;

/// 
/// The ListFileMembersIndividualResult union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListFileMembersIndividualResult : NSObject <DBXSerializable> 

/// The `DBXSHARINGListFileMembersIndividualResultTag` enum type represents the
/// possible tag states with which the
/// `DBXSHARINGListFileMembersIndividualResult` union can exist.
typedef NS_ENUM(NSInteger, DBXSHARINGListFileMembersIndividualResultTag) {
    /// The results of the query for this file if it was successful
    DBXSHARINGListFileMembersIndividualResultResult,

    /// The result of the query for this file if it was an error.
    DBXSHARINGListFileMembersIndividualResultAccessError,

    /// (no description).
    DBXSHARINGListFileMembersIndividualResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGListFileMembersIndividualResultTag tag;

/// The results of the query for this file if it was successful
@property (nonatomic, readonly) DBXSHARINGListFileMembersCountResult * _Nonnull result;

/// The result of the query for this file if it was an error.
@property (nonatomic, readonly) DBXSHARINGSharingFileAccessError * _Nonnull accessError;

/// 
/// Initializes union class with tag state of `Result`.
/// 
/// About the `Result` tag state: The results of the query for this file if it
/// was successful
/// 
/// - parameter result: The results of the query for this file if it was
/// successful
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersIndividualResult`
/// instance.
/// 
- (nonnull instancetype)initWithResult:(DBXSHARINGListFileMembersCountResult * _Nonnull)result;

/// 
/// Initializes union class with tag state of `AccessError`.
/// 
/// About the `AccessError` tag state: The result of the query for this file if
/// it was an error.
/// 
/// - parameter accessError: The result of the query for this file if it was an
/// error.
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersIndividualResult`
/// instance.
/// 
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError * _Nonnull)accessError;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersIndividualResult`
/// instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `Result`.
/// 
/// - returns: Whether the union's current tag state has value `Result`.
/// 
- (BOOL)isResult;

/// 
/// Retrieves whether the union's current tag state has value `AccessError`.
/// 
/// - returns: Whether the union's current tag state has value `AccessError`.
/// 
- (BOOL)isAccessError;

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
/// The serialization class for the `DBXSHARINGListFileMembersIndividualResult`
/// union.
/// 
@interface DBXSHARINGListFileMembersIndividualResultSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGListFileMembersIndividualResult` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXSHARINGListFileMembersIndividualResult` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersIndividualResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersIndividualResult * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGListFileMembersIndividualResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersIndividualResult` API object.
/// 
///  - returns: An instantiation of the
/// `DBXSHARINGListFileMembersIndividualResult` object.
/// 
+ (DBXSHARINGListFileMembersIndividualResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
