//
//  DimensMacros.h
//  ebochong
//
//  Created by zengming on 2017/3/30.
//  Copyright © 2017年 曾明. All rights reserved.
//

#ifndef DimensMacros_h
#define DimensMacros_h

//weakself
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

// ------------------------ 重构常用宏 ----------------------

// 判断是否是iPhone X
#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// 状态栏高度
#define STATUS_BAR_HEIGHT (iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define NAVIGATION_BAR_HEIGHT (iPhoneX ? 88.f : 64.f)
// tabBar高度
#define TAB_BAR_HEIGHT (iPhoneX ? (49.f+34.f) : 49.f)
// home indicator
#define HOME_INDICATOR_HEIGHT (iPhoneX ? 34.f : 0.f)

//状态栏 ＋ 导航栏 高度
#define STATUS_AND_NAVIGATION_HEIGHT ((STATUS_BAR_HEIGHT) + (NAVIGATION_BAR_HEIGHT))

//状态栏 ＋ 导航栏 高度
#define TABBAR_AND_NAVIGATION_HEIGHT ((TAB_BAR_HEIGHT) + (NAVIGATION_BAR_HEIGHT))

//屏幕 rect
#define SCREEN_RECT ([UIScreen mainScreen].bounds)

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)

#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#define CONTENT_HEIGHT (SCREEN_HEIGHT - NAVIGATION_BAR_HEIGHT - TAB_BAR_HEIGHT)

//屏幕分辨率
#define SCREEN_RESOLUTION (SCREEN_WIDTH * SCREEN_HEIGHT * ([UIScreen mainScreen].scale))

//iphone适配比例
#define IS_IPHONE_4 (fabs((double)[[UIScreen mainScreen]bounds].size.height - (double)480) < DBL_EPSILON)
#define IS_IPHONE_5 (fabs((double)[[UIScreen mainScreen]bounds].size.height - (double)568) < DBL_EPSILON)
#define IS_IPHONE_6 (fabs((double)[[UIScreen mainScreen]bounds].size.height - (double)667) < DBL_EPSILON)
#define IS_IPHONE_6_PLUS (fabs((double)[[UIScreen mainScreen]bounds].size.height - (double)736) < DBL_EPSILON)
#define IS_IPHONE_X (fabs((double)[[UIScreen mainScreen]bounds].size.height - (double)812) < DBL_EPSILON)
//横向适配比例
#define H_ADAPTER (IS_IPHONE_4*0.853333 + IS_IPHONE_5*0.853333 + IS_IPHONE_6 + IS_IPHONE_6_PLUS*1.104 + IS_IPHONE_X*(812/736.0f))
//纵向适配比例
#define V_ADAPTER (IS_IPHONE_4*0.719640 + IS_IPHONE_5*0.851574 + IS_IPHONE_6 + IS_IPHONE_6_PLUS*1.103448)


// -----------------------  原生态宏定义  ---------------------------
#define DISTANCE_MAP @"100"


//首次启动判断
#define First_Launched @"firstLaunch"


#define scaleFont(fontSize)

#define MAIN_LabelwhiteColor  [UIColor whiteColor]
#define MAIN_LabelblackColor  [UIColor blackColor]

#pragma mark -----------  color颜色 ---------------
//主要背景色
//#define Main_groundColor [UIColor colorWithRed:246/255.0f green:246/255.0f blue:246/255.0f alpha:1]
#define Main_groundColor [HTTPSessionManager colorWithHexadecimal:@"f2f2f2"]


//状态栏背景色
#define StatusBar_color [UIColor colorWithRed:4/255.0f green:116/255.0f blue:104/255.0f alpha:1]
//导航栏颜色 47	177	146
//#define NavColor [UIColor colorWithRed:26/255.0f green:190/255.0f blue:149/255.0f alpha:1]
//#define NavColor [UIColor colorWithRed:47/255.0f green:177/255.0f blue:146/255.0f alpha:1]
//46	190	148
//#define NavColor [UIColor colorWithRed:46/255.0f green:190/255.0f blue:148/255.0f alpha:1]
#define NavColor [HTTPSessionManager colorWithHexadecimal:@"19be94"]
//主button绿色
#define Main_Btn_GreenCololr [UIColor colorWithRed:26/255.0f green:190/255.0f blue:149/255.0f alpha:1]

//边线颜色
#define CGColor_GrayColor [UIColor colorWithRed:217/255.0f green:217/255.0f blue:217/255.0f alpha:1]

//文字内容信息色_灰
#define textcolor_gray [UIColor colorWithRed:130/255.0f green:130/255.0f blue:130/255.0f alpha:1]

//红色  233 84 92
#define Main_Btn_redCololr [UIColor colorWithRed:233/255.0f green:84/255.0f blue:92/255.0f alpha:1]

/**  cell内部分割线颜色  */
#define cellLineColor [UIColor colorWithRed:218/255.0f green:218/255.0f blue:218/255.0f alpha:1]


#pragma mark ---------- 主体色 ---------------
//主体色_绿色
#define Main_Color_Green [UIColor colorWithRed:26/255.0f green:190/255.0f blue:149/255.0f alpha:1]

//文本色_灰黑
#define Main_text_GrayBlack [UIColor colorWithRed:56/255.0f green:56/255.0f blue:56/255.0f alpha:1]
//文本色_灰白
#define Main_text_GrayWhite [UIColor colorWithRed:130/255.0f green:130/255.0f blue:130/255.0f alpha:1]
//文本色_黄色
#define Main_text_Yellow [UIColor colorWithRed:254/255.0f green:186/255.0f blue:55/255.0f alpha:1]


//区分线颜色
#define Main_lineGroundColor [UIColor colorWithRed:214/255.0f green:214/255.0f blue:214/255.0f alpha:1]
#define Main_lineGroundColor_gay_e6e6e6 @"e6e6e6"
#define Main_lineGroundColor_gay_e5e5e5 @"e5e5e5"

#define Main_textColor_grayWithe_666666 @"666666"
#define Main_textColor_grayWithe_333333 @"333333"
#define Main_textColor_grayWithe_999999 @"999999"
#define Main_textColor_blue_66b4fe      @"66b4fe"
#define Main_textColor_yellow_ff9640    @"ff9640"

#define Main_btnColor_grayWithe_cccccc  @"cccccc"


//按钮
#define Main_btnRed   [UIColor colorWithRed:250/255.0f green:15/255.0f blue:50/255.0f alpha:1]

#define Main_btnGray_75  [UIColor colorWithRed:75/255.0f green:75/255.0f blue:75/255.0f alpha:1]
#define Main_btnGray_120  [UIColor colorWithRed:120/255.0f green:120/255.0f blue:120/255.0f alpha:1]
#define Main_btnwhite_205  [UIColor colorWithRed:205/255.0f green:205/255.0f blue:205/255.0f alpha:1]
#define Main_btnwhite_220  [UIColor colorWithRed:220/255.0f green:220/255.0f blue:220/255.0f alpha:1]

#define Main_btnblue_56_148_187 [UIColor colorWithRed:56/255.0f green:148/255.0f blue:187/255.0f alpha:1]

//文本
#define Main_textRed  [UIColor colorWithRed:250/255.0f green:70/255.0f blue:70/255.0f alpha:1]
#define Main_textGray_90  [UIColor colorWithRed:90/255.0f green:90/255.0f blue:90/255.0f alpha:1]
#define Main_textGray_110  [UIColor colorWithRed:110/255.0f green:110/255.0f blue:110/255.0f alpha:1]
#define Main_textGray_205  [UIColor colorWithRed:205/255.0f green:205/255.0f blue:205/255.0f alpha:1]

#define Main_textRed_f44336 [ColorManager colorWithHexadecimal:@"f44336"]
#define Main_textGreen_4caf50 [ColorManager colorWithHexadecimal:@"f44336"]


//背景
#define Main_bgGray_240 [UIColor colorWithRed:240/255.0f green:240/255.0f blue:240/255.0f alpha:1]
#define Main_navbgGray_200 [UIColor colorWithRed:200/255.0f green:200/255.0f blue:200/255.0f alpha:1]
#define Main_lineGray_160 [UIColor colorWithRed:160/255.0f green:160/255.0f blue:160/255.0f alpha:1]
#define Main_lineGray_170 [UIColor colorWithRed:170/255.0f green:170/255.0f blue:170/255.0f alpha:1]
#define Main_lineGray_150 [UIColor colorWithRed:150/255.0f green:150/255.0f blue:150/255.0f alpha:1]


#define Main_fontName_Helvetica      @"Helvetica"
#define Main_fontName_Helvetica_Bold @"Helvetica-Bold"

#pragma mark -----------  尺寸设置  ----------------

#define MainScreen_Width [UIScreen mainScreen].bounds.size.width
#define MainScreen_Heigth [UIScreen mainScreen].bounds.size.height

#define autoScaleW(width) [(AppDelegate *)[UIApplication sharedApplication].delegate autoScaleW:width]
#define autoScaleH(height) [(AppDelegate *)[UIApplication sharedApplication].delegate autoScaleH:height]




#pragma mark ------------  间距  ----------------
//#define theDistance_x 15  //水平间距
#define theDistance_y 10  //垂直间距
#define content_left_x 10
#define content_height 10

#define IMAGE_LOCATION_HEIGHT 20
#define IMAGE_LOCATION_WIDTH  15



#pragma mark ------------ 颜色 -------------------



// 判断是否是iPhone X
#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// 状态栏高度
#define STATUS_BAR_HEIGHT (iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define NAVIGATION_BAR_HEIGHT (iPhoneX ? 88.f : 64.f)
// tabBar高度
#define TAB_BAR_HEIGHT (iPhoneX ? (49.f+34.f) : 49.f)
// home indicator
#define HOME_INDICATOR_HEIGHT (iPhoneX ? 34.f : 0.f)

//状态栏 ＋ 导航栏 高度
#define STATUS_AND_NAVIGATION_HEIGHT ((STATUS_BAR_HEIGHT) + (NAVIGATION_BAR_HEIGHT))

#define TABBAR_AND_NAVIGATION_HEIGHT ((TAB_BAR_HEIGHT) + (NAVIGATION_BAR_HEIGHT))

#endif /* DimensMacros_h */
