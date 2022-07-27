//
//  JMAutolayoutUtilities.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

__attribute__((visibility("default"))) @interface JMAutolayoutUtilities : NSObject

+ (UIView*)autolayoutView;
+ (UILabel*)autolayoutLabel;
+ (UILabel*)autolayoutLabelWithJustifiedParagraphStyleText: (NSString *) text;
+ (UIImageView*)autolayoutImageView;
+ (UIActivityIndicatorView*)autolayoutActivityIndicatorView;
+ (UIButton*)autolayoutButton;
+ (UITableView *)autolayoutTableViewWithTableViewStyle:(UITableViewStyle) tableViewStyle;

+ (UIView*)autolayoutVisualEffectViewWithVisualEffect:(UIVisualEffect*)visualEffect;
+ (UILabel*)autolayoutLabelWithDefaultColor:(UIColor*)color;
+ (UILabel*)autolayoutLabelWithDefaultColor:(UIColor*)color justifiedText:(NSString*)text;
+ (UIImageView*)autolayoutImageViewWithDefaultColor:(UIColor*)color;
+ (UIView*)autolayoutVisualEffectView;

@end
