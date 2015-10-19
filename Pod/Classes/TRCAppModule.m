//
//  TKAppModule.m
//  TraceKit
//
//  Created by Brian Bal on 9/18/14.
//  Copyright (c) 2014 Brian Bal. All rights reserved.
//

#import "TRCAppModule.h"
#import "TRCModuleInterface.h"

@implementation TRCAppModule

- (id)init
{
    self = [super init];
    if (self != nil)
    {
        _modules = [[NSMutableArray alloc] initWithCapacity:5];
    }
    
    return self;
}

- (void)registerModule:(Class)klass
{
    id<TRCModuleInterface> module = [[klass alloc] init];
    [module configureWithAppModule:self];
    [_modules addObject:module];
}

- (void)setRootViewController:(UIViewController *)viewController
{
    if (_window.rootViewController == nil)
    {
        _window.rootViewController = viewController;
    }
    else
    {
        _window.rootViewController = viewController;
    }
}

- (void)handleModuleEvent:(NSString *)eventName withData:(NSDictionary *)data
{
    if (data != nil)
    {
        NSString *msg = [NSString stringWithFormat:@"handleModuleEvent (%@) from property must be set and must be a view controller", eventName];
        NSAssert([[data objectForKey:LTCAppEventFromKey] isKindOfClass:[UIViewController class]], msg);
    }
    
    for (id<TRCModuleInterface> module in _modules)
    {
        if ([module handleAppEvent:eventName withData:data])
        {
            break;
        }
    }
}

@end
