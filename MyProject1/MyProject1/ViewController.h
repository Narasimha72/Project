//
//  ViewController.h
//  MyProject1
//
//  Created by Nuvvala on 5/11/15.
//  Copyright (c) 2015 Narasimha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RegistrationViewController.h"

@interface ViewController : UIViewController

-(IBAction)pressSignUpButton:(id)sender;

@property(nonatomic,strong) RegistrationViewController *registrationController;

@end

