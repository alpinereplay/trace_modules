//
//  TKModule.h
//  TraceKit
//
//  Created by Brian Bal on 9/18/14.
//  Copyright (c) 2014 Brian Bal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TRCAppModule.h"
#import "TRCModuleInterface.h"

@interface TRCModule : NSObject <TRCModuleInterface>

@property (nonatomic, strong) NSString *name;
@property (nonatomic, weak) TRCAppModule *appModule;

- (void)sendAppEvent:(NSString *)eventName withData:(NSDictionary *)data;

@end
