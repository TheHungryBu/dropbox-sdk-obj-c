///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAddFolderMemberError.h"
#import "DBXSHARINGSharedFolderAccessError.h"
#import "DBXSHARINGSharedFolderMemberError.h"
#import "DBXSHARINGUpdateFolderMemberError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGUpdateFolderMemberError 

@synthesize accessError = _accessError;
@synthesize memberError = _memberError;
@synthesize noExplicitAccess = _noExplicitAccess;

- (instancetype)initWithAccessError:(DBXSHARINGSharedFolderAccessError *)accessError {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGUpdateFolderMemberErrorAccessError;
        _accessError = accessError;
    }
    return self;
}

- (instancetype)initWithMemberError:(DBXSHARINGSharedFolderMemberError *)memberError {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGUpdateFolderMemberErrorMemberError;
        _memberError = memberError;
    }
    return self;
}

- (instancetype)initWithNoExplicitAccess:(DBXSHARINGAddFolderMemberError *)noExplicitAccess {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGUpdateFolderMemberErrorNoExplicitAccess;
        _noExplicitAccess = noExplicitAccess;
    }
    return self;
}

- (instancetype)initWithInsufficientPlan {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGUpdateFolderMemberErrorInsufficientPlan;
    }
    return self;
}

- (instancetype)initWithNoPermission {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGUpdateFolderMemberErrorNoPermission;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGUpdateFolderMemberErrorOther;
    }
    return self;
}

- (BOOL)isAccessError {
    return _tag == DBXSHARINGUpdateFolderMemberErrorAccessError;
}

- (BOOL)isMemberError {
    return _tag == DBXSHARINGUpdateFolderMemberErrorMemberError;
}

- (BOOL)isNoExplicitAccess {
    return _tag == DBXSHARINGUpdateFolderMemberErrorNoExplicitAccess;
}

- (BOOL)isInsufficientPlan {
    return _tag == DBXSHARINGUpdateFolderMemberErrorInsufficientPlan;
}

- (BOOL)isNoPermission {
    return _tag == DBXSHARINGUpdateFolderMemberErrorNoPermission;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGUpdateFolderMemberErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGUpdateFolderMemberErrorAccessError:
           return @"DBXSHARINGUpdateFolderMemberErrorAccessError";
        case DBXSHARINGUpdateFolderMemberErrorMemberError:
           return @"DBXSHARINGUpdateFolderMemberErrorMemberError";
        case DBXSHARINGUpdateFolderMemberErrorNoExplicitAccess:
           return @"DBXSHARINGUpdateFolderMemberErrorNoExplicitAccess";
        case DBXSHARINGUpdateFolderMemberErrorInsufficientPlan:
           return @"DBXSHARINGUpdateFolderMemberErrorInsufficientPlan";
        case DBXSHARINGUpdateFolderMemberErrorNoPermission:
           return @"DBXSHARINGUpdateFolderMemberErrorNoPermission";
        case DBXSHARINGUpdateFolderMemberErrorOther:
           return @"DBXSHARINGUpdateFolderMemberErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGSharedFolderAccessError *)accessError {
    if (![self isAccessError]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGUpdateFolderMemberErrorAccessError`, but was %@.", [self getTagName]];
    }
    return _accessError;
}

- (DBXSHARINGSharedFolderMemberError *)memberError {
    if (![self isMemberError]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGUpdateFolderMemberErrorMemberError`, but was %@.", [self getTagName]];
    }
    return _memberError;
}

- (DBXSHARINGAddFolderMemberError *)noExplicitAccess {
    if (![self isNoExplicitAccess]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGUpdateFolderMemberErrorNoExplicitAccess`, but was %@.", [self getTagName]];
    }
    return _noExplicitAccess;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGUpdateFolderMemberErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGUpdateFolderMemberErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGUpdateFolderMemberErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGUpdateFolderMemberErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGUpdateFolderMemberError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isAccessError]) {
        jsonDict = [[DBXSHARINGSharedFolderAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
        jsonDict[@".tag"] = @"access_error";
    }
    else if ([valueObj isMemberError]) {
        jsonDict = [[DBXSHARINGSharedFolderMemberErrorSerializer serialize:valueObj.memberError] mutableCopy];
        jsonDict[@".tag"] = @"member_error";
    }
    else if ([valueObj isNoExplicitAccess]) {
        jsonDict = [[DBXSHARINGAddFolderMemberErrorSerializer serialize:valueObj.noExplicitAccess] mutableCopy];
        jsonDict[@".tag"] = @"no_explicit_access";
    }
    else if ([valueObj isInsufficientPlan]) {
        jsonDict[@".tag"] = @"insufficient_plan";
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

+ (DBXSHARINGUpdateFolderMemberError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"access_error"]) {
        DBXSHARINGSharedFolderAccessError *accessError = [DBXSHARINGSharedFolderAccessErrorSerializer deserialize:valueDict[@"access_error"]];
        return [[DBXSHARINGUpdateFolderMemberError alloc] initWithAccessError:accessError];
    }
    else if ([tag isEqualToString:@"member_error"]) {
        DBXSHARINGSharedFolderMemberError *memberError = [DBXSHARINGSharedFolderMemberErrorSerializer deserialize:valueDict[@"member_error"]];
        return [[DBXSHARINGUpdateFolderMemberError alloc] initWithMemberError:memberError];
    }
    else if ([tag isEqualToString:@"no_explicit_access"]) {
        DBXSHARINGAddFolderMemberError *noExplicitAccess = [DBXSHARINGAddFolderMemberErrorSerializer deserialize:valueDict[@"no_explicit_access"]];
        return [[DBXSHARINGUpdateFolderMemberError alloc] initWithNoExplicitAccess:noExplicitAccess];
    }
    else if ([tag isEqualToString:@"insufficient_plan"]) {
        return [[DBXSHARINGUpdateFolderMemberError alloc] initWithInsufficientPlan];
    }
    else if ([tag isEqualToString:@"no_permission"]) {
        return [[DBXSHARINGUpdateFolderMemberError alloc] initWithNoPermission];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGUpdateFolderMemberError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
