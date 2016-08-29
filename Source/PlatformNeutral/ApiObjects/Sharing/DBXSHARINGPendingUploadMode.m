///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGPendingUploadMode.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGPendingUploadMode 

- (instancetype)initWithFile {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPendingUploadModeFile;
    }
    return self;
}

- (instancetype)initWithFolder {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGPendingUploadModeFolder;
    }
    return self;
}

- (BOOL)isFile {
    return _tag == DBXSHARINGPendingUploadModeFile;
}

- (BOOL)isFolder {
    return _tag == DBXSHARINGPendingUploadModeFolder;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGPendingUploadModeFile:
           return @"DBXSHARINGPendingUploadModeFile";
        case DBXSHARINGPendingUploadModeFolder:
           return @"DBXSHARINGPendingUploadModeFolder";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGPendingUploadModeSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGPendingUploadModeSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGPendingUploadModeSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGPendingUploadModeSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGPendingUploadMode *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isFile]) {
        jsonDict[@".tag"] = @"file";
    }
    else if ([valueObj isFolder]) {
        jsonDict[@".tag"] = @"folder";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGPendingUploadMode *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"file"]) {
        return [[DBXSHARINGPendingUploadMode alloc] initWithFile];
    }
    else if ([tag isEqualToString:@"folder"]) {
        return [[DBXSHARINGPendingUploadMode alloc] initWithFolder];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
