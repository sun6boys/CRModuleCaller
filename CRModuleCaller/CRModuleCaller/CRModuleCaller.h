//
//  CRModuleCaller.h
//  CRModuleCaller
//
//  Created by Charon on 2019/3/25.
//  Copyright © 2019年 Charon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRModule.h"

@class CRModuleCallerBuilder;
@interface CRModuleCaller : NSObject

+ (void)registerModule:(id <CRModule>)module;
+ (void)unregisterModule:(id <CRModule>)module;

- (void)call;
- (void)callAsync;
- (void)callAsyncWithCallBackOnQueue:(dispatch_queue_t)queue callBack:(dispatch_block_t)callBack;

- (CRModuleCallerBuilder *)builderForModuleName:(NSString *)moduleName;
@end


@interface CRModuleCallerBuilder : NSObject

- (instancetype)setAction:(NSString *)action;
- (instancetype)setParams:(id)params;
- (instancetype)addInterceptor:(id <CRModuleInterceptor>)interceptor;

- (CRModuleCaller *)build;
@end
