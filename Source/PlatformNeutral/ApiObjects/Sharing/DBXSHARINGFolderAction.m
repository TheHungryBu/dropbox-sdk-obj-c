///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGFolderAction.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGFolderAction 

- (instancetype)initWithChangeOptions {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionChangeOptions;
    }
    return self;
}

- (instancetype)initWithEditContents {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionEditContents;
    }
    return self;
}

- (instancetype)initWithInviteEditor {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionInviteEditor;
    }
    return self;
}

- (instancetype)initWithInviteViewer {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionInviteViewer;
    }
    return self;
}

- (instancetype)initWithInviteViewerNoComment {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionInviteViewerNoComment;
    }
    return self;
}

- (instancetype)initWithRelinquishMembership {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionRelinquishMembership;
    }
    return self;
}

- (instancetype)initWithUnmount {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionUnmount;
    }
    return self;
}

- (instancetype)initWithUnshare {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionUnshare;
    }
    return self;
}

- (instancetype)initWithLeaveACopy {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionLeaveACopy;
    }
    return self;
}

- (instancetype)initWithShareLink {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionShareLink;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGFolderActionOther;
    }
    return self;
}

- (BOOL)isChangeOptions {
    return _tag == DBXSHARINGFolderActionChangeOptions;
}

- (BOOL)isEditContents {
    return _tag == DBXSHARINGFolderActionEditContents;
}

- (BOOL)isInviteEditor {
    return _tag == DBXSHARINGFolderActionInviteEditor;
}

- (BOOL)isInviteViewer {
    return _tag == DBXSHARINGFolderActionInviteViewer;
}

- (BOOL)isInviteViewerNoComment {
    return _tag == DBXSHARINGFolderActionInviteViewerNoComment;
}

- (BOOL)isRelinquishMembership {
    return _tag == DBXSHARINGFolderActionRelinquishMembership;
}

- (BOOL)isUnmount {
    return _tag == DBXSHARINGFolderActionUnmount;
}

- (BOOL)isUnshare {
    return _tag == DBXSHARINGFolderActionUnshare;
}

- (BOOL)isLeaveACopy {
    return _tag == DBXSHARINGFolderActionLeaveACopy;
}

- (BOOL)isShareLink {
    return _tag == DBXSHARINGFolderActionShareLink;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGFolderActionOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGFolderActionChangeOptions:
           return @"DBXSHARINGFolderActionChangeOptions";
        case DBXSHARINGFolderActionEditContents:
           return @"DBXSHARINGFolderActionEditContents";
        case DBXSHARINGFolderActionInviteEditor:
           return @"DBXSHARINGFolderActionInviteEditor";
        case DBXSHARINGFolderActionInviteViewer:
           return @"DBXSHARINGFolderActionInviteViewer";
        case DBXSHARINGFolderActionInviteViewerNoComment:
           return @"DBXSHARINGFolderActionInviteViewerNoComment";
        case DBXSHARINGFolderActionRelinquishMembership:
           return @"DBXSHARINGFolderActionRelinquishMembership";
        case DBXSHARINGFolderActionUnmount:
           return @"DBXSHARINGFolderActionUnmount";
        case DBXSHARINGFolderActionUnshare:
           return @"DBXSHARINGFolderActionUnshare";
        case DBXSHARINGFolderActionLeaveACopy:
           return @"DBXSHARINGFolderActionLeaveACopy";
        case DBXSHARINGFolderActionShareLink:
           return @"DBXSHARINGFolderActionShareLink";
        case DBXSHARINGFolderActionOther:
           return @"DBXSHARINGFolderActionOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGFolderActionSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGFolderActionSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGFolderActionSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGFolderActionSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGFolderAction *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isChangeOptions]) {
        jsonDict[@".tag"] = @"change_options";
    }
    else if ([valueObj isEditContents]) {
        jsonDict[@".tag"] = @"edit_contents";
    }
    else if ([valueObj isInviteEditor]) {
        jsonDict[@".tag"] = @"invite_editor";
    }
    else if ([valueObj isInviteViewer]) {
        jsonDict[@".tag"] = @"invite_viewer";
    }
    else if ([valueObj isInviteViewerNoComment]) {
        jsonDict[@".tag"] = @"invite_viewer_no_comment";
    }
    else if ([valueObj isRelinquishMembership]) {
        jsonDict[@".tag"] = @"relinquish_membership";
    }
    else if ([valueObj isUnmount]) {
        jsonDict[@".tag"] = @"unmount";
    }
    else if ([valueObj isUnshare]) {
        jsonDict[@".tag"] = @"unshare";
    }
    else if ([valueObj isLeaveACopy]) {
        jsonDict[@".tag"] = @"leave_a_copy";
    }
    else if ([valueObj isShareLink]) {
        jsonDict[@".tag"] = @"share_link";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGFolderAction *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"change_options"]) {
        return [[DBXSHARINGFolderAction alloc] initWithChangeOptions];
    }
    else if ([tag isEqualToString:@"edit_contents"]) {
        return [[DBXSHARINGFolderAction alloc] initWithEditContents];
    }
    else if ([tag isEqualToString:@"invite_editor"]) {
        return [[DBXSHARINGFolderAction alloc] initWithInviteEditor];
    }
    else if ([tag isEqualToString:@"invite_viewer"]) {
        return [[DBXSHARINGFolderAction alloc] initWithInviteViewer];
    }
    else if ([tag isEqualToString:@"invite_viewer_no_comment"]) {
        return [[DBXSHARINGFolderAction alloc] initWithInviteViewerNoComment];
    }
    else if ([tag isEqualToString:@"relinquish_membership"]) {
        return [[DBXSHARINGFolderAction alloc] initWithRelinquishMembership];
    }
    else if ([tag isEqualToString:@"unmount"]) {
        return [[DBXSHARINGFolderAction alloc] initWithUnmount];
    }
    else if ([tag isEqualToString:@"unshare"]) {
        return [[DBXSHARINGFolderAction alloc] initWithUnshare];
    }
    else if ([tag isEqualToString:@"leave_a_copy"]) {
        return [[DBXSHARINGFolderAction alloc] initWithLeaveACopy];
    }
    else if ([tag isEqualToString:@"share_link"]) {
        return [[DBXSHARINGFolderAction alloc] initWithShareLink];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGFolderAction alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
