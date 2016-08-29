///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAccessLevel.h"
#import "DBXSHARINGAddFileMemberArgs.h"
#import "DBXSHARINGMemberSelector.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGAddFileMemberArgs 

- (instancetype)initWithFile:(NSString *)file members:(NSArray<DBXSHARINGMemberSelector *> *)members customMessage:(NSString *)customMessage quiet:(NSNumber *)quiet accessLevel:(DBXSHARINGAccessLevel *)accessLevel addMessageAsComment:(NSNumber *)addMessageAsComment {
    [DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:@"((/|id:).*|nspath:[^:]*:[^:]*)"](file);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](members);

    self = [super init];
    if (self) {
        _file = file;
        _members = members;
        _customMessage = customMessage;
        _quiet = quiet ?: @NO;
        _accessLevel = accessLevel ?: [[DBXSHARINGAccessLevel alloc] initWithViewer];
        _addMessageAsComment = addMessageAsComment ?: @NO;
    }
    return self;
}

- (instancetype)initWithFile:(NSString *)file members:(NSArray<DBXSHARINGMemberSelector *> *)members {
    return [self initWithFile:file members:members customMessage:nil quiet:nil accessLevel:nil addMessageAsComment:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGAddFileMemberArgsSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGAddFileMemberArgsSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGAddFileMemberArgsSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGAddFileMemberArgsSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGAddFileMemberArgs *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"file"] = valueObj.file;
    jsonDict[@"members"] = [DBXArraySerializer serialize:valueObj.members withBlock:^id(id elem) { return [DBXSHARINGMemberSelectorSerializer serialize:elem]; }];
    if (valueObj.customMessage) {
        jsonDict[@"custom_message"] = valueObj.customMessage;
    }
    jsonDict[@"quiet"] = valueObj.quiet;
    jsonDict[@"access_level"] = [DBXSHARINGAccessLevelSerializer serialize:valueObj.accessLevel];
    jsonDict[@"add_message_as_comment"] = valueObj.addMessageAsComment;

    return jsonDict;
}

+ (DBXSHARINGAddFileMemberArgs *)deserialize:(NSDictionary *)valueDict {
    NSString *file = valueDict[@"file"];
    NSArray<DBXSHARINGMemberSelector *> *members = [DBXArraySerializer deserialize:valueDict[@"members"] withBlock:^id(id elem) { return [DBXSHARINGMemberSelectorSerializer deserialize:elem]; }];
    NSString *customMessage = valueDict[@"custom_message"] ?: nil;
    NSNumber *quiet = valueDict[@"quiet"];
    DBXSHARINGAccessLevel *accessLevel = [DBXSHARINGAccessLevelSerializer deserialize:valueDict[@"access_level"]];
    NSNumber *addMessageAsComment = valueDict[@"add_message_as_comment"];

    return [[DBXSHARINGAddFileMemberArgs alloc] initWithFile:file members:members customMessage:customMessage quiet:quiet accessLevel:accessLevel addMessageAsComment:addMessageAsComment];
}

@end
