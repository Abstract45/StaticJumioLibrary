//
//  JMAppearance.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

__attribute__((visibility("default"))) @interface JMAppearance : NSObject

+ (void) setGeneralAppearanceForClass:(id)containingClass;

+ (void)customizeJumioScanOverlayForClass:(Class)containingClass;

+ (UIColor *)colorForCloseButtonAppearance;

+ (UIColor *)submitButtonTitleColorForState:(UIControlState)state;

+ (BOOL) isBlurDisabled;
+ (BOOL) isDarkModeEnabled;
+ (UIBlurEffect *) blurEffect;
+ (UIColor *) foregroundColor;
+ (UIColor *) foregroundColorWithDefaultColor:(UIColor * _Nullable) defaultColor;

@end
