//
//  CRModuleCallBackResult.h
//  CRModuleCaller
//
//  Created by chuxiaolong on 2019/3/27.
//  Copyright © 2019 Charon. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,CRModuleCallBackStatus){
    CRModuleCallBackStatusSuccess = 0,    //业务上成功
    CRModuleCallBackStatusFailed = -1,    //业务上失败
    CRModuleCallBackStatusForbidden = -2, //被拦截器拦截
    CRModuleCallBackStatusModuleNotFound = -3, //不存在的module
    CRModuleCallBackStatusActionNotFound = -4, //不存在的action
};

@interface CRModuleCallBackResult : NSObject

@property (nonatomic, assign, readonly) CRModuleCallBackStatus callBackStatus;
@property (nonatomic, strong, readonly) id response;
@property (nonatomic, copy, readonly) NSString *errorMessage;

+ (instancetype)successResult;
+ (instancetype)successResultWithResponse:(id)response;

+ (instancetype)errorResultWithStatus:(CRModuleCallBackStatus)status;
+ (instancetype)errorResultWithStatus:(CRModuleCallBackStatus)status errorMessage:(NSString *)errorMessage;
+ (instancetype)errorResultWithStatus:(CRModuleCallBackStatus)status response:(id)response errorMessage:(NSString *)errorMessage;
@end

