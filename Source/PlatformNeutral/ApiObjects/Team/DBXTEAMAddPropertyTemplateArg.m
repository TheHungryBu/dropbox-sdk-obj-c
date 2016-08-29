///
/// Auto-generated by Stone, do not modify.
///

#import "DBXPROPERTIESPropertyFieldTemplate.h"
#import "DBXPROPERTIESPropertyGroupTemplate.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMAddPropertyTemplateArg.h"

@implementation DBXTEAMAddPropertyTemplateArg 

- (instancetype)initWithName:(NSString *)name description_:(NSString *)description_ fields:(NSArray<DBXPROPERTIESPropertyFieldTemplate *> *)fields {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](fields);

    self = [super initWithName:name description_:description_ fields:fields];
    if (self) {
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXTEAMAddPropertyTemplateArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMAddPropertyTemplateArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMAddPropertyTemplateArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMAddPropertyTemplateArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMAddPropertyTemplateArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"name"] = valueObj.name;
    jsonDict[@"description"] = valueObj.description_;
    jsonDict[@"fields"] = [DBXArraySerializer serialize:valueObj.fields withBlock:^id(id elem) { return [DBXPROPERTIESPropertyFieldTemplateSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBXTEAMAddPropertyTemplateArg *)deserialize:(NSDictionary *)valueDict {
    NSString *name = valueDict[@"name"];
    NSString *description_ = valueDict[@"description"];
    NSArray<DBXPROPERTIESPropertyFieldTemplate *> *fields = [DBXArraySerializer deserialize:valueDict[@"fields"] withBlock:^id(id elem) { return [DBXPROPERTIESPropertyFieldTemplateSerializer deserialize:elem]; }];

    return [[DBXTEAMAddPropertyTemplateArg alloc] initWithName:name description_:description_ fields:fields];
}

@end
