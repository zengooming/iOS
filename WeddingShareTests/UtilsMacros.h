//
//  UtilsMacros.h
//  ebochong
//
//  Created by zengming on 2017/3/30.
//  Copyright © 2017年 曾明. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h


#define S9ArrayAddObject(array, object)                                \
if (object) {                                                          \
[(array) addObject:(object)];                                          \
}                                                                      \
/* EOF 'S9ArrayAddObject' */

#pragma mark ---------------- Debug打印 -------------------

#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@" %s  " fmt), [[[NSString stringWithUTF8String:__FILE__] lastPathComponent]   UTF8String], __LINE__, __PRETTY_FUNCTION__,  ##__VA_ARGS__);
#else
#define DLog(...)
#endif


//Log utils marco

#ifdef DEBUG
#define logdebug(format, ...) NSLog(@"%s():%d " format, __func__, __LINE__, ##__VA_ARGS__)
#else
#define logdebug(...)
#endif

//Log utils marco

#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#ifdef DEBUG
#define DDLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DDLog(...)
#endif

#ifdef DEBUG
#define ULog(...)
//#define ULog(fmt, ...)  { UIAlertView *alert = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] message:[NSString stringWithFormat:fmt, ##__VA_ARGS__]  delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil]; [alert show]; }
#else
#define ULog(...)
#endif

//System version utils

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

// 获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)


#define MainColor_gray198 RGB(198,198,198)

#define IsPortrait ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait || [UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortraitUpsideDown)

#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))

//角度转弧度

#define DEGREES_TO_RADIANS(d) (d * M_PI / 180)

//大于等于7.0的ios版本
#define iOS7_OR_LATER SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")

//大于等于8.0的ios版本
#define iOS8_OR_LATER SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")

//iOS6时，导航VC中view的起始高度
#define YH_HEIGHT (iOS7_OR_LATER ? 64:0)

//获取系统时间戳
#define getCurentTime [NSString stringWithFormat:@"%ld", (long)[[NSDate date] timeIntervalSince1970]]

#define NSNotificationNameStartHeartNStimer @"startHeartNStimer"

// -------------------------  iphoneX适配 -------------




#endif /* UtilsMacros_h */
