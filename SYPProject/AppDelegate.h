//
//  AppDelegate.h
//  SYPProject
//
//  Created by 玉平 孙 on 12-1-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RRException.h"
#import "RMConnectCenter.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,RRExceptionProtocol,RenrenMobileDelegate>//

@property (strong, nonatomic) UIWindow *window;

@end
