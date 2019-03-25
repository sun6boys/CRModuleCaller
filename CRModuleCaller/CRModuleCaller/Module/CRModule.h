//
//  CRModule.h
//  CRModuleCaller
//
//  Created by Charon on 2019/3/25.
//  Copyright © 2019年 Charon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRModuleInterceptor.h"

@protocol CRModule <NSObject>

@required
- (NSString *)moduleName;

- (void)onCall;

@optional
- (id <CRModuleInterceptor>)interceptor;
@end

