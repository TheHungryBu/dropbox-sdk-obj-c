///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESSearchMatchType;

/// 
/// The SearchMatchType union.
/// 
/// Indicates what type of match was found for a given item.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESSearchMatchType : NSObject <DBXSerializable> 

/// The `DBXFILESSearchMatchTypeTag` enum type represents the possible tag
/// states with which the `DBXFILESSearchMatchType` union can exist.
typedef NS_ENUM(NSInteger, DBXFILESSearchMatchTypeTag) {
    /// This item was matched on its file or folder name.
    DBXFILESSearchMatchTypeFilename,

    /// This item was matched based on its file contents.
    DBXFILESSearchMatchTypeContent,

    /// This item was matched based on both its contents and its file name.
    DBXFILESSearchMatchTypeBoth,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESSearchMatchTypeTag tag;

/// 
/// Initializes union class with tag state of `Filename`.
/// 
/// About the `Filename` tag state: This item was matched on its file or folder
/// name.
/// 
/// - returns: An initialized `DBXFILESSearchMatchType` instance.
/// 
- (nonnull instancetype)initWithFilename;

/// 
/// Initializes union class with tag state of `Content`.
/// 
/// About the `Content` tag state: This item was matched based on its file
/// contents.
/// 
/// - returns: An initialized `DBXFILESSearchMatchType` instance.
/// 
- (nonnull instancetype)initWithContent;

/// 
/// Initializes union class with tag state of `Both`.
/// 
/// About the `Both` tag state: This item was matched based on both its contents
/// and its file name.
/// 
/// - returns: An initialized `DBXFILESSearchMatchType` instance.
/// 
- (nonnull instancetype)initWithBoth;

/// 
/// Retrieves whether the union's current tag state has value `Filename`.
/// 
/// - returns: Whether the union's current tag state has value `Filename`.
/// 
- (BOOL)isFilename;

/// 
/// Retrieves whether the union's current tag state has value `Content`.
/// 
/// - returns: Whether the union's current tag state has value `Content`.
/// 
- (BOOL)isContent;

/// 
/// Retrieves whether the union's current tag state has value `Both`.
/// 
/// - returns: Whether the union's current tag state has value `Both`.
/// 
- (BOOL)isBoth;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESSearchMatchType` union.
/// 
@interface DBXFILESSearchMatchTypeSerializer : NSObject 

/// 
/// Serializes `DBXFILESSearchMatchType` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESSearchMatchType` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESSearchMatchType` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESSearchMatchType * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESSearchMatchType` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESSearchMatchType` API object.
/// 
///  - returns: An instantiation of the `DBXFILESSearchMatchType` object.
/// 
+ (DBXFILESSearchMatchType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
