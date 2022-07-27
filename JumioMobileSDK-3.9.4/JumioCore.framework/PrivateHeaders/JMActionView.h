//
//  JMActionView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <JumioCore/JMBaseView.h>
#import <JumioCore/JMAutolayoutUtilities.h>
#import <JumioCore/JMFontUtilities.h>

static const CGFloat kActionViewContentInsetHorizontalPhone = 30.0f;
static const CGFloat kActionViewContentInsetHorizontalPad = 70.0f;

__attribute__((visibility("default"))) @interface JMActionView : JMBaseView

@property (nonatomic, strong) UIView* iconView;
@property (nonatomic, strong) UILabel* labelHeadline;
@property (nonatomic, strong) UILabel* labelDescription;

- (instancetype) initWithIconView: (UIView*) iconView headline: (NSString *) headline description: (NSString *) description;
- (void) setLabelDescriptionText:(NSString *)string;

- (void) addSubviewToVisualEffectView:(UIView *)view;
- (UIView * const)contentView;

@end
