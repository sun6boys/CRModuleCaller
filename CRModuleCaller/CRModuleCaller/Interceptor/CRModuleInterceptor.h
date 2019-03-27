//
//  CRModuleInterceptor.h
//  CRModuleCaller
//
//  Created by Charon on 2019/3/25.
//  Copyright © 2019年 Charon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRModuleMessage.h"

@protocol CRModuleInterceptor <NSObject>

- (BOOL)shouldCallModuleWithContext:(CRModuleMessage *)context;
@end

