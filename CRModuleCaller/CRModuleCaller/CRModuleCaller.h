//
//  CRModuleCaller.h
//  CRModuleCaller
//
//  Created by Charon on 2019/3/25.
//  Copyright © 2019年 Charon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRModule.h"
#import "CRModuleCallBackResult.h"

typedef void (^CRModuleCallBack)(CRModuleCallBackResult *result);

@class CRModuleCallerBuilder;
@interface CRModuleCaller : NSObject

+ (void)registerModule:(id <CRModule>)module;
+ (void)unregisterModule:(id <CRModule>)module;

- (void)call;
- (void)callAsync;
- (void)callAsyncWithCallBackOnQueue:(dispatch_queue_t)queue callBack:(CRModuleCallBack)callBack;

- (CRModuleCallerBuilder *)builderForModuleName:(NSString *)moduleName;
@end

@interface CRMessageContext : NSObject

@property (nonatomic, copy, readonly) NSString *moduleName;
@property (nonatomic, copy, readonly) NSString *actionName;
@end

@interface CRModuleCallerBuilder : NSObject

- (instancetype)setAction:(NSString *)action;
- (instancetype)setParams:(id)params;
- (instancetype)addInterceptor:(id <CRModuleInterceptor>)interceptor;

- (CRModuleCaller *)build;
@end
