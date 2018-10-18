//
//  ColorAndFontMacros.h
//  CommonProject
//
//  Created by ios on 2018/10/18.
//  Copyright © 2018 ios. All rights reserved.
//

#ifndef ColorAndFontMacros_h
#define ColorAndFontMacros_h


//存放几个使用方便的宏
#define OJAColor(R, G, B, A)       [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
#define OJAColorFromHex(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define OJARedIconColor                     OJAColorFromHex(0xBF0112)
//所有浅红色文字
#define OJALightRedTextColor                OJAColorFromHex(0xde838d)
//所有红色文字
#define OJARedTextColor                     OJAColorFromHex(0xbc081c)
//不可操作的文字颜色
#define OJARedTextDisableColor              OJAColorFromHex(0xf3b0af)
//绿色文字及区域
#define OJAGreenColor                       OJAColorFromHex(0x89c000)
//所有用于@别人及点赞，评论的数字
#define OJAHightLightTextColor              OJAColorFromHex(0x3c75b3)
//用于标题，列表主要字段
#define OJANormalTextColor                  OJAColorFromHex(0x333333)
//用于标题，列表次要字段
#define OJASecondTextColor                  OJAColorFromHex(0x666666)
//用于辅助信息，时间，概要说明
#define OJAPlaceholderTextColor             OJAColorFromHex(0x999999)
//输入文字未激活时
#define OJADisableTextColor                 OJAColorFromHex(0xcccccc)
//用于界面背景，列表分隔线
#define OJADefaultViewColor                 OJAColorFromHex(0xeeeeee)
#define OJALineColor                        OJAColorFromHex(0xeeeeee)
//用于转发内容的背景色
#define OJAReSendViewColor                  OJAColorFromHex(0xf5f5f5)

#define OJAHomeTableViewBackgroundColor     OJAColorFromHex(0xeeeeee)
//tableview默认颜色
#define OJATableViewBackgroundColor         OJAHomeTableViewBackgroundColor

#define OJANoReadColor                      OJAColorFromHex(0xfff0f0)

#define OJAWhiteColor                       [UIColor whiteColor]

#define OJATagColor                         OJAColorFromHex(0xbd081c)

#define OJALinkColor                        OJARedTextColor

//Tabbar相关颜色
#define OJATabbarBackgroundColor            OJAColorFromHex(0xfafafa)
#define OJATabbarTitleNormalColor           OJAColorFromHex(0x333333)
#define OJATabbarTitleSelectedColor         OJARedTextColor

//navbar相关颜色
#define OJANavBarBackgroundColor            OJAColorFromHex(0xfafafa)
#define OJANavBarTitleColor                 OJAColorFromHex(0x333333)





#define OJAMenuTextColor                    OJAColorFromHex(0x000000)
#define OJAMenuViewBackgroundColor          OJAColorFromHex(0x333333)

//tableView相关颜色
#define OJATableViewSeparatorColor          OJAColorFromHex(0xeeeeee)
#define OJATableViewCellSeletedColor        OJAColorFromHex(0xefefef)
#define OJATableViewCellHighlightedColor    OJAColorFromHex(0xe9e9e9)


#define OJAButtonBorderColor                OJAColorFromHex(0xdcdcdc)

#define OJAButtonRedColor                   OJAColorFromHex(0xdb0804)

#define OJARedColor                         OJAColorFromHex(0xdb0804)


#endif /* ColorAndFontMacros_h */
