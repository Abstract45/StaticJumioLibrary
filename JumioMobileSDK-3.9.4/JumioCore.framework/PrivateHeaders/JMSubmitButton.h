//
//  JMSubmitButton.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <JumioCore/JMThemeableButton.h>

__attribute__((visibility("default")))  @interface JMSubmitButton : JMThemeableButton

@property (nonatomic,strong) UIColor *borderColor UI_APPEARANCE_SELECTOR;

- (CGFloat) JMSubmitButtonDefaultHeight;
- (CGFloat) JMSubmitButtonDefaultWidth;

@end
