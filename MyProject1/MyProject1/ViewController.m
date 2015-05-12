//
//  ViewController.m
//  MyProject1
//
//  Created by Nuvvala on 5/11/15.
//  Copyright (c) 2015 Narasimha. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(IBAction)pressSignUpButton:(id)sender
{
    self.registrationController = [[RegistrationViewController alloc]initWithNibName:@"RegistrationViewController" bundle:nil];
    UINavigationController *navigation = [[UINavigationController alloc]initWithRootViewController:self.registrationController];
    [self presentViewController:navigation animated:YES completion:^{
        
    }];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
