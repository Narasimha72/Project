//
//  RegistrationViewController.h
//  MyProject1
//
//  Created by Nuvvala on 5/11/15.
//  Copyright (c) 2015 Narasimha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RegistrationViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *firstNameTextbox;
@property (weak, nonatomic) IBOutlet UITextField *lastNameTextbox;
@property (weak, nonatomic) IBOutlet UITextField *emailTextbox;
@property (weak, nonatomic) IBOutlet UITextField *usernameTextbox;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextbox;

- (IBAction)registerNowPressed:(id)sender;


@end
