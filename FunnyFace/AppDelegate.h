//
//  AppDelegate.h
//  FunnyFace
//
//  Created by antondev on 04/01/17.
//  Copyright © 2017 engune. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SplashViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) IBOutlet SplashViewController *splashController;

@end

