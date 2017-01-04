//
//  ViewController.h
//  FunnyFace
//
//  Created by antondev on 04/01/17.
//  Copyright © 2017 engune. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate>

- (IBAction)onCameraShot:(id)sender;
- (IBAction)onLibraryShot:(id)sender;


@end

