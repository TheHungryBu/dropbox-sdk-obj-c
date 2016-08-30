///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMBaseDfbReport.h"
#import "DBTEAMGetStorageReport.h"
#import "DBTEAMStorageBucket.h"

#pragma mark - API Object

@implementation DBTEAMGetStorageReport 

#pragma mark - Constructors

- (instancetype)initWithStartDate:(NSString *)startDate totalUsage:(NSArray<NSNumber *> *)totalUsage sharedUsage:(NSArray<NSNumber *> *)sharedUsage unsharedUsage:(NSArray<NSNumber *> *)unsharedUsage sharedFolders:(NSArray<NSNumber *> *)sharedFolders memberStorageMap:(NSArray<NSArray<DBTEAMStorageBucket *> *> *)memberStorageMap {
    [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](totalUsage);
    [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedUsage);
    [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](unsharedUsage);
    [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](sharedFolders);
    [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:[DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](memberStorageMap);

    self = [super initWithStartDate:startDate];
    if (self) {
        _totalUsage = totalUsage;
        _sharedUsage = sharedUsage;
        _unsharedUsage = unsharedUsage;
        _sharedFolders = sharedFolders;
        _memberStorageMap = memberStorageMap;
    }
    return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
    return [DBTEAMGetStorageReportSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBTEAMGetStorageReportSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
    return [[DBTEAMGetStorageReportSerializer serialize:self] description];
}

@end


#pragma mark - Serializer Object

@implementation DBTEAMGetStorageReportSerializer 

+ (NSDictionary *)serialize:(DBTEAMGetStorageReport *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"start_date"] = valueObj.startDate;
    jsonDict[@"total_usage"] = [DBArraySerializer serialize:valueObj.totalUsage withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_usage"] = [DBArraySerializer serialize:valueObj.sharedUsage withBlock:^id(id elem) { return elem; }];
    jsonDict[@"unshared_usage"] = [DBArraySerializer serialize:valueObj.unsharedUsage withBlock:^id(id elem) { return elem; }];
    jsonDict[@"shared_folders"] = [DBArraySerializer serialize:valueObj.sharedFolders withBlock:^id(id elem) { return elem; }];
    jsonDict[@"member_storage_map"] = [DBArraySerializer serialize:valueObj.memberStorageMap withBlock:^id(id elem) { return [DBArraySerializer serialize:elem withBlock:^id(id elem) { return [DBTEAMStorageBucketSerializer serialize:elem]; }]; }];

    return jsonDict;
}

+ (DBTEAMGetStorageReport *)deserialize:(NSDictionary *)valueDict {
    NSString *startDate = valueDict[@"start_date"];
    NSArray<NSNumber *> *totalUsage = [DBArraySerializer deserialize:valueDict[@"total_usage"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedUsage = [DBArraySerializer deserialize:valueDict[@"shared_usage"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *unsharedUsage = [DBArraySerializer deserialize:valueDict[@"unshared_usage"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSNumber *> *sharedFolders = [DBArraySerializer deserialize:valueDict[@"shared_folders"] withBlock:^id(id elem) { return elem; }];
    NSArray<NSArray<DBTEAMStorageBucket *> *> *memberStorageMap = [DBArraySerializer deserialize:valueDict[@"member_storage_map"] withBlock:^id(id elem) { return [DBArraySerializer deserialize:elem withBlock:^id(id elem) { return [DBTEAMStorageBucketSerializer deserialize:elem]; }]; }];

    return [[DBTEAMGetStorageReport alloc] initWithStartDate:startDate totalUsage:totalUsage sharedUsage:sharedUsage unsharedUsage:unsharedUsage sharedFolders:sharedFolders memberStorageMap:memberStorageMap];
}

@end