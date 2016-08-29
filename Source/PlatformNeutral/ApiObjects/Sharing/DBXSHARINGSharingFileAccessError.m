///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGSharingFileAccessError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGSharingFileAccessError 

- (instancetype)initWithNoPermission {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGSharingFileAccessErrorNoPermission;
    }
    return self;
}

- (instancetype)initWithInvalidFile {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGSharingFileAccessErrorInvalidFile;
    }
    return self;
}

- (instancetype)initWithIsFolder {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGSharingFileAccessErrorIsFolder;
    }
    return self;
}

- (instancetype)initWithInsidePublicFolder {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGSharingFileAccessErrorInsidePublicFolder;
    }
    return self;
}

- (instancetype)initWithInsideOsxPackage {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGSharingFileAccessErrorInsideOsxPackage;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGSharingFileAccessErrorOther;
    }
    return self;
}

- (BOOL)isNoPermission {
    return _tag == DBXSHARINGSharingFileAccessErrorNoPermission;
}

- (BOOL)isInvalidFile {
    return _tag == DBXSHARINGSharingFileAccessErrorInvalidFile;
}

- (BOOL)isIsFolder {
    return _tag == DBXSHARINGSharingFileAccessErrorIsFolder;
}

- (BOOL)isInsidePublicFolder {
    return _tag == DBXSHARINGSharingFileAccessErrorInsidePublicFolder;
}

- (BOOL)isInsideOsxPackage {
    return _tag == DBXSHARINGSharingFileAccessErrorInsideOsxPackage;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGSharingFileAccessErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGSharingFileAccessErrorNoPermission:
           return @"DBXSHARINGSharingFileAccessErrorNoPermission";
        case DBXSHARINGSharingFileAccessErrorInvalidFile:
           return @"DBXSHARINGSharingFileAccessErrorInvalidFile";
        case DBXSHARINGSharingFileAccessErrorIsFolder:
           return @"DBXSHARINGSharingFileAccessErrorIsFolder";
        case DBXSHARINGSharingFileAccessErrorInsidePublicFolder:
           return @"DBXSHARINGSharingFileAccessErrorInsidePublicFolder";
        case DBXSHARINGSharingFileAccessErrorInsideOsxPackage:
           return @"DBXSHARINGSharingFileAccessErrorInsideOsxPackage";
        case DBXSHARINGSharingFileAccessErrorOther:
           return @"DBXSHARINGSharingFileAccessErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGSharingFileAccessErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGSharingFileAccessErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGSharingFileAccessErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGSharingFileAccessErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGSharingFileAccessError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isNoPermission]) {
        jsonDict[@".tag"] = @"no_permission";
    }
    else if ([valueObj isInvalidFile]) {
        jsonDict[@".tag"] = @"invalid_file";
    }
    else if ([valueObj isIsFolder]) {
        jsonDict[@".tag"] = @"is_folder";
    }
    else if ([valueObj isInsidePublicFolder]) {
        jsonDict[@".tag"] = @"inside_public_folder";
    }
    else if ([valueObj isInsideOsxPackage]) {
        jsonDict[@".tag"] = @"inside_osx_package";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGSharingFileAccessError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"no_permission"]) {
        return [[DBXSHARINGSharingFileAccessError alloc] initWithNoPermission];
    }
    else if ([tag isEqualToString:@"invalid_file"]) {
        return [[DBXSHARINGSharingFileAccessError alloc] initWithInvalidFile];
    }
    else if ([tag isEqualToString:@"is_folder"]) {
        return [[DBXSHARINGSharingFileAccessError alloc] initWithIsFolder];
    }
    else if ([tag isEqualToString:@"inside_public_folder"]) {
        return [[DBXSHARINGSharingFileAccessError alloc] initWithInsidePublicFolder];
    }
    else if ([tag isEqualToString:@"inside_osx_package"]) {
        return [[DBXSHARINGSharingFileAccessError alloc] initWithInsideOsxPackage];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGSharingFileAccessError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
