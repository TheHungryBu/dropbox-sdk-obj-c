///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMDeviceSession.h"
#import "DBXTEAMMobileClientPlatform.h"
#import "DBXTEAMMobileClientSession.h"

@implementation DBXTEAMMobileClientSession 

- (instancetype)initWithSessionId:(NSString *)sessionId deviceName:(NSString *)deviceName clientType:(DBXTEAMMobileClientPlatform *)clientType ipAddress:(NSString *)ipAddress country:(NSString *)country created:(NSDate *)created updated:(NSDate *)updated clientVersion:(NSString *)clientVersion osVersion:(NSString *)osVersion lastCarrier:(NSString *)lastCarrier {

    self = [super initWithSessionId:sessionId ipAddress:ipAddress country:country created:created updated:updated];
    if (self) {
        _deviceName = deviceName;
        _clientType = clientType;
        _clientVersion = clientVersion;
        _osVersion = osVersion;
        _lastCarrier = lastCarrier;
    }
    return self;
}

- (instancetype)initWithSessionId:(NSString *)sessionId deviceName:(NSString *)deviceName clientType:(DBXTEAMMobileClientPlatform *)clientType {
    return [self initWithSessionId:sessionId deviceName:deviceName clientType:clientType ipAddress:nil country:nil created:nil updated:nil clientVersion:nil osVersion:nil lastCarrier:nil];
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMMobileClientSessionSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMMobileClientSessionSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMMobileClientSessionSerializer serialize:self] description];
}

@end


@implementation DBXTEAMMobileClientSessionSerializer 

+ (NSDictionary *)serialize:(DBXTEAMMobileClientSession *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"session_id"] = valueObj.sessionId;
    jsonDict[@"device_name"] = valueObj.deviceName;
    jsonDict[@"client_type"] = [DBXTEAMMobileClientPlatformSerializer serialize:valueObj.clientType];
    if (valueObj.ipAddress) {
        jsonDict[@"ip_address"] = valueObj.ipAddress;
    }
    if (valueObj.country) {
        jsonDict[@"country"] = valueObj.country;
    }
    if (valueObj.created) {
        jsonDict[@"created"] = [DBXNSDateSerializer serialize:valueObj.created dateFormat:@"%Y-%m-%dT%H:%M:%SZ"];
    }
    if (valueObj.updated) {
        jsonDict[@"updated"] = [DBXNSDateSerializer serialize:valueObj.updated dateFormat:@"%Y-%m-%dT%H:%M:%SZ"];
    }
    if (valueObj.clientVersion) {
        jsonDict[@"client_version"] = valueObj.clientVersion;
    }
    if (valueObj.osVersion) {
        jsonDict[@"os_version"] = valueObj.osVersion;
    }
    if (valueObj.lastCarrier) {
        jsonDict[@"last_carrier"] = valueObj.lastCarrier;
    }

    return jsonDict;
}

+ (DBXTEAMMobileClientSession *)deserialize:(NSDictionary *)valueDict {
    NSString *sessionId = valueDict[@"session_id"];
    NSString *deviceName = valueDict[@"device_name"];
    DBXTEAMMobileClientPlatform *clientType = [DBXTEAMMobileClientPlatformSerializer deserialize:valueDict[@"client_type"]];
    NSString *ipAddress = valueDict[@"ip_address"] ?: nil;
    NSString *country = valueDict[@"country"] ?: nil;
    NSDate *created = valueDict[@"created"] ? [DBXNSDateSerializer deserialize:valueDict[@"created"] dateFormat:@"%Y-%m-%dT%H:%M:%SZ"] : nil;
    NSDate *updated = valueDict[@"updated"] ? [DBXNSDateSerializer deserialize:valueDict[@"updated"] dateFormat:@"%Y-%m-%dT%H:%M:%SZ"] : nil;
    NSString *clientVersion = valueDict[@"client_version"] ?: nil;
    NSString *osVersion = valueDict[@"os_version"] ?: nil;
    NSString *lastCarrier = valueDict[@"last_carrier"] ?: nil;

    return [[DBXTEAMMobileClientSession alloc] initWithSessionId:sessionId deviceName:deviceName clientType:clientType ipAddress:ipAddress country:country created:created updated:updated clientVersion:clientVersion osVersion:osVersion lastCarrier:lastCarrier];
}

@end
