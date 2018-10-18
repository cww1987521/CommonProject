//
//  CBaseViewController.h
//  CommonProject
//
//  Created by ios on 2018/10/12.
//  Copyright © 2018 ios. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CBaseViewController : UIViewController
- (void)setNavTitle:(NSString *)titleString;
- (void)setNavTitleView:(UIView *)titleView;
- (void)setLeftNavView:(UIBarButtonItem *)leftButton;
- (void)setRightNavView:(UIBarButtonItem *)rightButton;
- (void)setRightNavItems:(NSArray *)rightButtons;
@end

NS_ASSUME_NONNULL_END
