//
//  JumioDeviceInfo.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * NSObject that holds information about the device. 
 **/
__attribute__((visibility("default"))) @interface JumioDeviceInfo : NSObject

/**
 * @return YES if device is detected as jailbroken
 **/
+ (BOOL) isJailbrokenDevice;

@end
