//
//  ViewController.m
//  CustomUITestApp
//
//  Created by JJ on 11/5/14.
//  Copyright (c) 2014 appsharenow. All rights reserved.
//  Visit me at: www.appsharenow.com
//  Contact me at: support@appsharenow.com
//

#import "ViewController.h"


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    customUI = [CustomUI sharedManager];
    
    /*
     * Uses custom UIView to create a custom background
     */
    UIView *customView = [customUI customColorBackgroundView:10 :10 :20 :20 :2.0 :[UIColor redColor] :[UIColor yellowColor]];
    
    /*
     * Uses the custom line to draw a line
     */
    UIButton *line = [customUI customLine:20 :120 :true :100 :[UIColor redColor]];
    
    /*
     * Uses the custom circle to draw a circle
     */
    UIButton *circle = [customUI customCircle:100 :150 :30 :[UIColor redColor] :@"5" :[UIColor whiteColor]  :15.0f];

    [self.view addSubview:customView];
    [self.view addSubview:line];
    [self.view addSubview:circle];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
