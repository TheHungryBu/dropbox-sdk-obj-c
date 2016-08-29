///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMBaseDfbReport;

/// 
/// The BaseDfbReport struct.
/// 
/// Base report structure.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMBaseDfbReport : NSObject <DBXSerializable> 

/// First date present in the results as 'YYYY-MM-DD' or None.
@property (nonatomic, readonly, copy) NSString * _Nonnull startDate;

/// 
/// Full constructor for the `DBXTEAMBaseDfbReport` struct (exposes all instance
/// variables).
/// 
/// - parameter startDate: First date present in the results as 'YYYY-MM-DD' or
/// None.
/// 
/// - returns: An initialized `DBXTEAMBaseDfbReport` instance.
/// 
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate;

@end


/// 
/// The serialization class for the BaseDfbReport struct.
/// 
@interface DBXTEAMBaseDfbReportSerializer : NSObject 

/// 
/// Serializes `DBXTEAMBaseDfbReport` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMBaseDfbReport` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMBaseDfbReport` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMBaseDfbReport * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMBaseDfbReport` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMBaseDfbReport` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMBaseDfbReport` object.
/// 
+ (DBXTEAMBaseDfbReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
