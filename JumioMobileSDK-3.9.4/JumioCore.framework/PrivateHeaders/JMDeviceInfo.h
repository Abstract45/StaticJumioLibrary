//
//  JMDeviceInfo.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JumioCore/JMReachability.h>

typedef enum
{
    NOT_AVAILABLE,
    
    IPHONE_2G,
    IPHONE_3G,
    IPHONE_3GS,
    IPHONE_4,
    IPHONE_4_CDMA,
    IPHONE_4S,
    IPHONE_5,
    IPHONE_5_CDMA_GSM,
    IPHONE_5C,
    IPHONE_5C_CDMA_GSM,
    IPHONE_5S,
    IPHONE_5S_CDMA_GSM,
    IPHONE_6_PLUS,
    IPHONE_6,
    IPHONE_6S,
    IPHONE_6S_PLUS,
    IPHONE_7,
    IPHONE_7_PLUS,
    IPHONE_SE,
    IPHONE_8,
    IPHONE_8_PLUS,
    IPHONE_X,
    IPHONE_XS,
    IPHONE_XS_MAX,
    IPHONE_XR,
    IPHONE_11,
    IPHONE_11_PRO,
    IPHONE_11_PRO_MAX,
    IPHONE_SE_2,
    
    IPOD_TOUCH_1G,
    IPOD_TOUCH_2G,
    IPOD_TOUCH_3G,
    IPOD_TOUCH_4G,
    IPOD_TOUCH_5G,
    IPOD_TOUCH_6G,
    IPOD_TOUCH_7G,
    
    IPAD,
    IPAD_2,
    IPAD_2_WIFI,
    IPAD_2_CDMA,
    IPAD_3,
    IPAD_3G,
    IPAD_3_WIFI,
    IPAD_3_WIFI_CDMA,
    IPAD_4,
    IPAD_4_WIFI,
    IPAD_4_GSM_CDMA,
    IPAD_5,
    IPAD_5_WIFI,
    IPAD_6,
    IPAD_6_WIFI,
    IPAD_AIR_WIFI,
    IPAD_AIR,
    IPAD_AIR_2_WIFI,
    IPAD_AIR_2,
    IPAD_AIR_3_WIFI,
    IPAD_AIR_3,
    IPAD_PRO_12_9_WIFI,
    IPAD_PRO_12_9,
    IPAD_PRO_9_7_WIFI,
    IPAD_PRO_9_7,
    IPAD_PRO_2_12_9_WIFI,
    IPAD_PRO_2_12_9,
    IPAD_PRO_3_12_9_WIFI,
    IPAD_PRO_3_12_9_WIFI_1TB,
    IPAD_PRO_3_12_9,
    IPAD_PRO_3_12_9_1TB,
    IPAD_PRO_10_5_WIFI,
    IPAD_PRO_10_5,
    IPAD_PRO_11_WIFI,
    IPAD_PRO_11_WIFI_1TB,
    IPAD_PRO_11,
    IPAD_PRO_11_1TB,
    
    
    IPAD_MINI,
    IPAD_MINI_WIFI,
    IPAD_MINI_WIFI_CDMA,
    IPAD_MINI_2_WIFI,
    IPAD_MINI_2,
    IPAD_MINI_3_WIFI,
    IPAD_MINI_3,
    IPAD_MINI_3_2,
    IPAD_MINI_4_WIFI,
    IPAD_MINI_4,
    IPAD_MINI_5_WIFI,
    IPAD_MINI_5,
    
    SIMULATOR
} DeviceModel;

__attribute__((visibility("default"))) @interface JMDeviceInfo : NSObject

+ (BOOL)isPhone;
+ (BOOL)isPad;

+ (DeviceModel)deviceModel;
+ (NSString*)deviceModelString;
+ (NSString*)deviceModelDescription;
+ (BOOL) isIPHONE_X;

+ (unsigned int)cpuCores;

+ (JMNetworkStatus)deviceNetworkType;

+ (BOOL) isJailbrokenDevice;

+ (UIInterfaceOrientation)deviceInterfaceOrientation;
+ (UIDeviceOrientation)deviceOrientation;
+ (BOOL)supportsLandscapeOrientation;
+ (BOOL)supportsPortraitOrientation;

+ (BOOL)hasNotch;
+ (BOOL)hasSmallerScreen;
+ (BOOL)hasNFC;

@end
