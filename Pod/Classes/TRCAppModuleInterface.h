//
//  TKAppModuleInterface.h
//  TraceKit
//
//  Created by Brian Bal on 9/18/14.
//  Copyright (c) 2014 Brian Bal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TRCAppModuleInterface <NSObject>

- (void)registerModule:(Class)klass;
- (void)setRootViewController:(UIViewController *)viewController;
- (void)handleModuleEvent:(NSString *)eventName withData:(NSDictionary *)data;

@end
