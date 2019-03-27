//
//  CRModuleCallBackResult.m
//  CRModuleCaller
//
//  Created by chuxiaolong on 2019/3/27.
//  Copyright © 2019 Charon. All rights reserved.
//

#import "CRModuleCallBackResult.h"

@interface CRModuleCallBackResult()

@property (nonatomic, assign, readwrite) CRModuleCallBackStatus callBackStatus;
@property (nonatomic, strong, readwrite) id response;
@property (nonatomic, copy, readwrite) NSString *errorMessage;
@end

@implementation CRModuleCallBackResult

#pragma mark - life cycles
- (instancetype)initWithStatus:(CRModuleCallBackStatus)status response:(id)response errorMessage:(NSString *)errorMessage
{
    self = [super init];
    if (self) {
        _callBackStatus = status;
        _response = response;
        _errorMessage = errorMessage;
    }
    return self;
}

#pragma mark - public methods
+ (instancetype)successResult
{
    return [self successResultWithResponse:nil];
}

+ (instancetype)successResultWithResponse:(id)response
{
    return [[self alloc] initWithStatus:CRModuleCallBackStatusSuccess response:response errorMessage:nil];
}

+ (instancetype)errorResultWithStatus:(CRModuleCallBackStatus)status
{
    return [self errorResultWithStatus:status response:nil errorMessage:nil];
}

+ (instancetype)errorResultWithStatus:(CRModuleCallBackStatus)status errorMessage:(NSString *)errorMessage
{
    return [self errorResultWithStatus:status response:nil errorMessage:nil];
}

+ (instancetype)errorResultWithStatus:(CRModuleCallBackStatus)status response:(id)response errorMessage:(NSString *)errorMessage
{
    return [[self alloc] initWithStatus:status response:response errorMessage:nil];
}

@end
