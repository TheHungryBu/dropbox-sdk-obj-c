///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMBaseDfbReport.h"
#import "DBXTEAMGetActivityReport.h"

@implementation DBXTEAMGetActivityReport 

- (instancetype)initWithStartDate:(NSString *)startDate adds:(NSArray<NSNumber *> *)adds edits:(NSArray<NSNumber *> *)edits deletes:(NSArray<NSNumber *> *)deletes activeUsers28Day:(NSArray<NSNumber *> *)activeUsers28Day activeUsers7Day:(NSArray<NSNumber *> *)activeUsers7Day activeUsers1Day:(NSArray<NSNumber *> *)activeUsers1Day activeSharedFolders28Day:(NSArray<NSNumber *> *)activeSharedFolders28Day activeSharedFolders7Day:(NSArray<NSNumber *> *)activeSharedFolders7Day activeSharedFolders1Day:(NSArray<NSNumber *> *)activeSharedFolders1Day sharedLinksCreated:(NSArray<NSNumber *> *)sharedLinksCreated sharedLinksViewedByTeam:(NSArray<NSNumber *> *)sharedLinksViewedByTeam sharedLinksViewedByOutsideUser:(NSArray<NSNumber *> *)sharedLinksViewedByOutsideUser sharedLinksViewedByNotLoggedIn:(NSArray<NSNumber *> *)sharedLinksViewedByNotLoggedIn sharedLinksViewedTotal:(NSArray<NSNumber *> *)sharedLinksViewedTotal {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](adds);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](edits);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](deletes);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](activeUsers28Day);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](activeUsers7Day);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](activeUsers1Day);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](activeSharedFolders28Day);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](activeSharedFolders7Day);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](activeSharedFolders1Day);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedLinksCreated);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedLinksViewedByTeam);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedLinksViewedByOutsideUser);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedLinksViewedByNotLoggedIn);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedLinksViewedTotal);

    self = [super initWithStartDate:startDate];
    if (self) {
        _adds = adds;
        _edits = edits;
        _deletes = deletes;
        _activeUsers28Day = activeUsers28Day;
        _activeUsers7Day = activeUsers7Day;
        _activeUsers1Day = activeUsers1Day;
        _activeSharedFolders28Day = activeSharedFolders28Day;
        _activeSharedFolders7Day = activeSharedFolders7Day;
        _activeSharedFolders1Day = activeSharedFolders1Day;
        _sharedLinksCreated = sharedLinksCreated;
        _sharedLinksViewedByTeam = sharedLinksViewedByTeam;
        _sharedLinksViewedByOutsideUser = sharedLinksViewedByOutsideUser;
        _sharedLinksViewedByNotLoggedIn = sharedLinksViewedByNotLoggedIn;
        _sharedLinksViewedTotal = sharedLinksViewedTotal;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMGetActivityReportSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGetActivityReportSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGetActivityReportSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGetActivityReportSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGetActivityReport *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"start_date"] = valueObj.startDate;
    jsonDict[@"adds"] = [DBXArraySerializer serialize:valueObj.adds withBlock:^id(id elem) { return elem; }];
    jsonDict[@"edits"] = [DBXArraySerializer serialize:valueObj.edits withBlock:^id(id elem) { return elem; }];
    jsonDict[@"deletes"] = [DBXArraySerializer serialize:valueObj.deletes withBlock:^id(id elem) { return elem; }];
    jsonDict[@"active_users_28_day"] = [DBXArraySerializer serialize:valueObj.activeUsers28Day withBlock:^id(id elem) { return elem; }];
    jsonDict[@"active_users_7_day"] = [DBXArraySerializer serialize:valueObj.activeUsers7Day withBlock:^id(id elem) { return elem; }];
    jsonDict[@"active_users_1_day"] = [DBXArraySerializer serialize:valueObj.activeUsers1Day withBlock:^id(id elem) { return elem; }];
    jsonDict[@"active_shared_folders_28_day"] = [DBXArraySerializer serialize:valueObj.activeSharedFolders28Day withBlock:^id(id elem) { return elem; }];
    jsonDict[@"active_shared_folders_7_day"] = [DBXArraySerializer serialize:valueObj.activeSharedFolders7Day withBlock:^id(id elem) { return elem; }];
    jsonDict[@"active_shared_folders_1_day"] = [DBXArraySerializer serialize:valueObj.activeSharedFolders1Day withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_links_created"] = [DBXArraySerializer serialize:valueObj.sharedLinksCreated withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_links_viewed_by_team"] = [DBXArraySerializer serialize:valueObj.sharedLinksViewedByTeam withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_links_viewed_by_outside_user"] = [DBXArraySerializer serialize:valueObj.sharedLinksViewedByOutsideUser withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_links_viewed_by_not_logged_in"] = [DBXArraySerializer serialize:valueObj.sharedLinksViewedByNotLoggedIn withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_links_viewed_total"] = [DBXArraySerializer serialize:valueObj.sharedLinksViewedTotal withBlock:^id(id elem) { return elem; }];

    return jsonDict;
}

+ (DBXTEAMGetActivityReport *)deserialize:(NSDictionary *)valueDict {
    NSString *startDate = valueDict[@"start_date"];
    NSArray<NSNumber *> *adds = [DBXArraySerializer deserialize:valueDict[@"adds"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *edits = [DBXArraySerializer deserialize:valueDict[@"edits"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *deletes = [DBXArraySerializer deserialize:valueDict[@"deletes"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *activeUsers28Day = [DBXArraySerializer deserialize:valueDict[@"active_users_28_day"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *activeUsers7Day = [DBXArraySerializer deserialize:valueDict[@"active_users_7_day"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *activeUsers1Day = [DBXArraySerializer deserialize:valueDict[@"active_users_1_day"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *activeSharedFolders28Day = [DBXArraySerializer deserialize:valueDict[@"active_shared_folders_28_day"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *activeSharedFolders7Day = [DBXArraySerializer deserialize:valueDict[@"active_shared_folders_7_day"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *activeSharedFolders1Day = [DBXArraySerializer deserialize:valueDict[@"active_shared_folders_1_day"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedLinksCreated = [DBXArraySerializer deserialize:valueDict[@"shared_links_created"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedLinksViewedByTeam = [DBXArraySerializer deserialize:valueDict[@"shared_links_viewed_by_team"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedLinksViewedByOutsideUser = [DBXArraySerializer deserialize:valueDict[@"shared_links_viewed_by_outside_user"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedLinksViewedByNotLoggedIn = [DBXArraySerializer deserialize:valueDict[@"shared_links_viewed_by_not_logged_in"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedLinksViewedTotal = [DBXArraySerializer deserialize:valueDict[@"shared_links_viewed_total"] withBlock:^id(id elem) { return elem; }];

    return [[DBXTEAMGetActivityReport alloc] initWithStartDate:startDate adds:adds edits:edits deletes:deletes activeUsers28Day:activeUsers28Day activeUsers7Day:activeUsers7Day activeUsers1Day:activeUsers1Day activeSharedFolders28Day:activeSharedFolders28Day activeSharedFolders7Day:activeSharedFolders7Day activeSharedFolders1Day:activeSharedFolders1Day sharedLinksCreated:sharedLinksCreated sharedLinksViewedByTeam:sharedLinksViewedByTeam sharedLinksViewedByOutsideUser:sharedLinksViewedByOutsideUser sharedLinksViewedByNotLoggedIn:sharedLinksViewedByNotLoggedIn sharedLinksViewedTotal:sharedLinksViewedTotal];
}

@end
