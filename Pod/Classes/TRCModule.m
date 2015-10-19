//
//  TKModule.m
//  TraceKit
//
//  Created by Brian Bal on 9/18/14.
//  Copyright (c) 2014 Brian Bal. All rights reserved.
//

#import "TRCModule.h"

@implementation TRCModule

- (void)configureWithAppModule:(id<TRCAppModuleInterface>)appModule
{
    self.appModule = appModule;
}

- (void)sendAppEvent:(NSString *)eventName withData:(NSDictionary *)data
{
    [self.appModule handleModuleEvent:eventName withData:data];
}

- (BOOL)handleAppEvent:(NSString *)eventName withData:(NSDictionary *)data
{
    return NO;
}

@end
