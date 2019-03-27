//
//  CRMessageContext.h
//  CRModuleCaller
//
//  Created by chuxiaolong on 2019/3/27.
//  Copyright © 2019 Charon. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CRModuleMessage : NSObject

@property (nonatomic, copy, readonly) NSString *moduleName;
@property (nonatomic, copy, readonly) NSString *actionName;
@property (nonatomic, copy, readonly) id arguments;

- (void)send;
@end

