//
//  JMSystemInfo.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

__attribute__((visibility("default"))) @interface JMSystemInfo : NSObject

+ (NSString*)systemVersionString;
+ (float)systemVersionNumber;
+ (BOOL)isSystemVersionAtLeastOS11;
+ (BOOL)isSystemVersionAtLeastOS13;

@end
