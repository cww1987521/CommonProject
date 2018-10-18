//
//  CBaseViewController.m
//  CommonProject
//
//  Created by ios on 2018/10/12.
//  Copyright © 2018 ios. All rights reserved.
//

#import "CBaseViewController.h"

@interface CBaseViewController ()

@end

@implementation CBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    //iOS11及以后版本的系统需要设置
    if (@available(iOS 11.0, *)){
        [[UIScrollView appearance] setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
    }
    
}
#pragma mark -
- (void)setNavTitle:(NSString *)titleString{
    [self.navigationItem setTitle:titleString];
}

- (void)setNavTitleView:(UIView *)titleView{
    self.navigationItem.titleView = titleView;
}

- (void)setLeftNavView:(UIBarButtonItem *)leftButton{
    
    UIBarButtonItem *negativeSpacer = [[UIBarButtonItem alloc]
                                       initWithBarButtonSystemItem:UIBarButtonSystemItemFixedSpace
                                       target:nil action:nil];
    self.navigationItem.leftBarButtonItems = [NSArray arrayWithObjects:negativeSpacer, leftButton, nil];
}

- (void)setRightNavView:(UIBarButtonItem *)rightButton{
    
    UIBarButtonItem *negativeSpacer = [[UIBarButtonItem alloc]
                                       initWithBarButtonSystemItem:UIBarButtonSystemItemFixedSpace
                                       target:nil action:nil];
    self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:negativeSpacer, rightButton, nil];
}

- (UIStatusBarStyle)preferredStatusBarStyle {
    return UIStatusBarStyleDefault;
}
- (void)setRightNavItems:(NSArray *)rightButtons{
    self.navigationItem.rightBarButtonItems = rightButtons;
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
