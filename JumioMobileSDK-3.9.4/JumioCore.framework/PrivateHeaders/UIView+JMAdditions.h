//
//  UIView+JMAdditions.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JMAdditions)

- (void) removeConstraintsOfView: (UIView*) ofView;
- (void)roundedCorners:(UIRectCorner)corners byRadius:(CGFloat)radius;

@end
