//
//  TKAppModule.h
//  TraceKit
//
//  Created by Brian Bal on 9/18/14.
//  Copyright (c) 2014 Brian Bal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TRCAppModuleInterface.h"

#define LTCAppEventFromKey @"from"

@interface TRCAppModule : NSObject <TRCAppModuleInterface>

@property (nonatomic, weak) UIWindow *window;
@property (nonatomic, strong) NSMutableArray *modules;

@end
