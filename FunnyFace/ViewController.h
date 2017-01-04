//
//  ViewController.h
//  FunnyFace
//
//  Created by antondev on 04/01/17.
//  Copyright © 2017 engune. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CLImageEditor.h"

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate, CLImageEditorDelegate>

- (IBAction)onCameraShot:(id)sender;
- (IBAction)onLibraryShot:(id)sender;


@end

