///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMPOLICIESEmmState;

/// 
/// The EmmState union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMPOLICIESEmmState : NSObject <DBXSerializable> 

/// The `DBXTEAMPOLICIESEmmStateTag` enum type represents the possible tag
/// states with which the `DBXTEAMPOLICIESEmmState` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMPOLICIESEmmStateTag) {
    /// Emm token is disabled
    DBXTEAMPOLICIESEmmStateDisabled,

    /// Emm token is optional
    DBXTEAMPOLICIESEmmStateOptional,

    /// Emm token is required
    DBXTEAMPOLICIESEmmStateRequired,

    /// (no description).
    DBXTEAMPOLICIESEmmStateOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMPOLICIESEmmStateTag tag;

/// 
/// Initializes union class with tag state of `Disabled`.
/// 
/// About the `Disabled` tag state: Emm token is disabled
/// 
/// - returns: An initialized `DBXTEAMPOLICIESEmmState` instance.
/// 
- (nonnull instancetype)initWithDisabled;

/// 
/// Initializes union class with tag state of `Optional`.
/// 
/// About the `Optional` tag state: Emm token is optional
/// 
/// - returns: An initialized `DBXTEAMPOLICIESEmmState` instance.
/// 
- (nonnull instancetype)initWithOptional;

/// 
/// Initializes union class with tag state of `Required`.
/// 
/// About the `Required` tag state: Emm token is required
/// 
/// - returns: An initialized `DBXTEAMPOLICIESEmmState` instance.
/// 
- (nonnull instancetype)initWithRequired;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMPOLICIESEmmState` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `Disabled`.
/// 
/// - returns: Whether the union's current tag state has value `Disabled`.
/// 
- (BOOL)isDisabled;

/// 
/// Retrieves whether the union's current tag state has value `Optional`.
/// 
/// - returns: Whether the union's current tag state has value `Optional`.
/// 
- (BOOL)isOptional;

/// 
/// Retrieves whether the union's current tag state has value `Required`.
/// 
/// - returns: Whether the union's current tag state has value `Required`.
/// 
- (BOOL)isRequired;

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
/// The serialization class for the `DBXTEAMPOLICIESEmmState` union.
/// 
@interface DBXTEAMPOLICIESEmmStateSerializer : NSObject 

/// 
/// Serializes `DBXTEAMPOLICIESEmmState` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMPOLICIESEmmState` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMPOLICIESEmmState` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMPOLICIESEmmState * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMPOLICIESEmmState` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMPOLICIESEmmState` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMPOLICIESEmmState` object.
/// 
+ (DBXTEAMPOLICIESEmmState * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
