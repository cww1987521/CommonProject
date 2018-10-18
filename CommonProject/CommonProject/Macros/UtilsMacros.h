//
//  UtilsMacros.h
//  CommonProject
//
//  Created by ios on 2018/10/18.
//  Copyright © 2018 ios. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h

//获取系统对象
#define kAppDelegate        [AppDelegate shareAppDelegate]
#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kApplication        [UIApplication sharedApplication]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]

//获取屏幕宽高
#define kScreenWidth        [[UIScreen mainScreen]bounds].size.width
#define kScreenHeight       [[UIScreen mainScreen]bounds].size.height

//当前设备
#define iPhoneX             ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhoneXR            ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhoneXS_Max        ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)
/** 是否是刘海屏，做统一适配 */
#define isIPhoneX_Series    ([[UIApplication sharedApplication] statusBarFrame].size.height == 44)
//#define isIPhoneXAll ([UIScreen mainScreen].bounds.size.height == 812 || [UIScreen mainScreen].bounds.size.height == 896)
/** iPhoneX全系导航栏增加高度 (64->88) */
#define kiPhoneX_Top_Height (isIPhoneX_Series?24:0)
/**  iPhoneX全系TabBar增加高度 (49->83) */
#define kiPhoneX_Bottom_Height  (isIPhoneX_Series?34:0)

//当前系统版本
#define CurrentSystemVersion    [[UIDevice currentDevice].systemVersion doubleValue]

//当前语言
#define CurrentLanguage        ［NSLocale preferredLanguages]objectAtIndex:0]


//-------------------打印日志-------------------------
//DEBUG模式下打印日志,当前行
#ifdef DEBUG
#define DLog( fmt, ... )  do {NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__); \
NSString *logStr = [NSString stringWithFormat:fmt, ##__VA_ARGS__];   \
[gConsoleLogInfo appendFormat:@"[方法名:%s][行号:%d]\n%@\n",__FUNCTION__, __LINE__,logStr]; \
}while(0)
#else
#define DLog(...)
#endif


#endif /* UtilsMacros_h */
