///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESLookupError.h"
#import "DBFILESSearchError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBFILESSearchError

@synthesize path = _path;

#pragma mark - Constructors

- (instancetype)initWithPath:(DBFILESLookupError *)path {
  self = [super init];
  if (self) {
    _tag = DBFILESSearchErrorPath;
    _path = path;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBFILESSearchErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

- (DBFILESLookupError *)path {
  if (![self isPath]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBFILESSearchErrorPath, but was %@.", [self tagName]];
  }
  return _path;
}

#pragma mark - Tag state methods

- (BOOL)isPath {
  return _tag == DBFILESSearchErrorPath;
}

- (BOOL)isOther {
  return _tag == DBFILESSearchErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBFILESSearchErrorPath:
    return @"DBFILESSearchErrorPath";
  case DBFILESSearchErrorOther:
    return @"DBFILESSearchErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBFILESSearchErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBFILESSearchErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBFILESSearchErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBFILESSearchErrorSerializer

+ (NSDictionary *)serialize:(DBFILESSearchError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isPath]) {
    jsonDict[@"path"] = [[DBFILESLookupErrorSerializer serialize:valueObj.path] mutableCopy];
    jsonDict[@".tag"] = @"path";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBFILESSearchError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"path"]) {
    DBFILESLookupError *path = [DBFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
    return [[DBFILESSearchError alloc] initWithPath:path];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBFILESSearchError alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end