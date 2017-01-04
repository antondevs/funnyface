//
//  EditorViewController.h
//  FunnyFace
//
//  Created by antondev on 04/01/17.
//  Copyright © 2017 engune. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditorViewController : UIViewController

@property (nonatomic , strong) UIImage* image;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
