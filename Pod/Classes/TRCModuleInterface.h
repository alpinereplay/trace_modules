//
//  TKModuleInterface.h
//  TraceKit
//
//  Created by Brian Bal on 9/18/14.
//  Copyright (c) 2014 Brian Bal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TRCAppModuleInterface.h"

@protocol TRCModuleInterface <NSObject>

- (void)configureWithAppModule:(id<TRCAppModuleInterface>)appModule;
- (BOOL)handleAppEvent:(NSString *)eventName withData:(NSDictionary *)data;

@end
