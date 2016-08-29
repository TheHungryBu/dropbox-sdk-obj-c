///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMBaseDfbReport.h"

@class DBXTEAMGetMembershipReport;

/// 
/// The GetMembershipReport struct.
/// 
/// Membership Report Result. Each of the items in the storage report is an
/// array of values, one value per day. If there is no data for a day, then the
/// value will be None.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGetMembershipReport : DBXTEAMBaseDfbReport <DBXSerializable> 

/// Team size, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull teamSize;

/// The number of pending invites to the team, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull pendingInvites;

/// The number of members that joined the team, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull membersJoined;

/// The number of suspended team members, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull suspendedMembers;

/// The total number of licenses the team has, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull licenses;

/// 
/// Full constructor for the `DBXTEAMGetMembershipReport` struct (exposes all
/// instance variables).
/// 
/// - parameter startDate: First date present in the results as 'YYYY-MM-DD' or
/// None.
/// - parameter teamSize: Team size, for each day.
/// - parameter pendingInvites: The number of pending invites to the team, for
/// each day.
/// - parameter membersJoined: The number of members that joined the team, for
/// each day.
/// - parameter suspendedMembers: The number of suspended team members, for each
/// day.
/// - parameter licenses: The total number of licenses the team has, for each
/// day.
/// 
/// - returns: An initialized `DBXTEAMGetMembershipReport` instance.
/// 
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate teamSize:(NSArray<NSNumber *> * _Nonnull)teamSize pendingInvites:(NSArray<NSNumber *> * _Nonnull)pendingInvites membersJoined:(NSArray<NSNumber *> * _Nonnull)membersJoined suspendedMembers:(NSArray<NSNumber *> * _Nonnull)suspendedMembers licenses:(NSArray<NSNumber *> * _Nonnull)licenses;

@end


/// 
/// The serialization class for the GetMembershipReport struct.
/// 
@interface DBXTEAMGetMembershipReportSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGetMembershipReport` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGetMembershipReport` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGetMembershipReport` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGetMembershipReport * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGetMembershipReport` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGetMembershipReport` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGetMembershipReport` object.
/// 
+ (DBXTEAMGetMembershipReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
