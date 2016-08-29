///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGMemberSelector;
@class DBXSHARINGRemoveFileMemberArg;

/// 
/// The RemoveFileMemberArg struct.
/// 
/// Arguments for removeFileMember2.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGRemoveFileMemberArg : NSObject <DBXSerializable> 

/// File from which to remove members.
@property (nonatomic, readonly, copy) NSString * _Nonnull file;

/// Member to remove from this file. Note that even if an email is specified, it
/// may result in the removal of a user (not an invitee) if the user's main
/// account corresponds to that email address.
@property (nonatomic, readonly) DBXSHARINGMemberSelector * _Nonnull member;

/// 
/// Full constructor for the `DBXSHARINGRemoveFileMemberArg` struct (exposes all
/// instance variables).
/// 
/// - parameter file: File from which to remove members.
/// - parameter member: Member to remove from this file. Note that even if an
/// email is specified, it may result in the removal of a user (not an invitee)
/// if the user's main account corresponds to that email address.
/// 
/// - returns: An initialized `DBXSHARINGRemoveFileMemberArg` instance.
/// 
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file member:(DBXSHARINGMemberSelector * _Nonnull)member;

@end


/// 
/// The serialization class for the RemoveFileMemberArg struct.
/// 
@interface DBXSHARINGRemoveFileMemberArgSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGRemoveFileMemberArg` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGRemoveFileMemberArg`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGRemoveFileMemberArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGRemoveFileMemberArg * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGRemoveFileMemberArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGRemoveFileMemberArg` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGRemoveFileMemberArg` object.
/// 
+ (DBXSHARINGRemoveFileMemberArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
