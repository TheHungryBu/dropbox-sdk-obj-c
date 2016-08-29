///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGFileMemberActionError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGFileMemberActionError 

- (instancetype)initWithInvalidMember {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFileMemberActionErrorInvalidMember;
    }
    return self;
}

- (instancetype)initWithNoPermission {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFileMemberActionErrorNoPermission;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFileMemberActionErrorOther;
    }
    return self;
}

- (BOOL)isInvalidMember {
    return _tag == DBXSHARINGFileMemberActionErrorInvalidMember;
}

- (BOOL)isNoPermission {
    return _tag == DBXSHARINGFileMemberActionErrorNoPermission;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGFileMemberActionErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGFileMemberActionErrorInvalidMember:
           return @"DBXSHARINGFileMemberActionErrorInvalidMember";
        case DBXSHARINGFileMemberActionErrorNoPermission:
           return @"DBXSHARINGFileMemberActionErrorNoPermission";
        case DBXSHARINGFileMemberActionErrorOther:
           return @"DBXSHARINGFileMemberActionErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGFileMemberActionErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGFileMemberActionErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGFileMemberActionErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGFileMemberActionErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGFileMemberActionError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isInvalidMember]) {
        jsonDict[@".tag"] = @"invalid_member";
    }
    else if ([valueObj isNoPermission]) {
        jsonDict[@".tag"] = @"no_permission";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGFileMemberActionError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"invalid_member"]) {
        return [[DBXSHARINGFileMemberActionError alloc] initWithInvalidMember];
    }
    else if ([tag isEqualToString:@"no_permission"]) {
        return [[DBXSHARINGFileMemberActionError alloc] initWithNoPermission];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGFileMemberActionError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
