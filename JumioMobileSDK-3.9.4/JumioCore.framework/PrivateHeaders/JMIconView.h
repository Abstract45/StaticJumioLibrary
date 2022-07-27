//
//  JMIconView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, JMIconType) {
    JMIconTypeNone = 0,
    JMIconTypeCheckmark,
    JMIconTypeArrowUp,
    JMIconTypeCross,
    JMIconTypeGeneralLock,
    JMIconTypeHelpViewArrowUp,
    JMIconTypeShutterButton,
    
    JMIconTypeRVCheckmark,
    JMIconTypeRVX,
    JMIconTypeRVLightSource
};

__attribute__((visibility("default"))) @interface JMIconView : UIView

@property (nonatomic, assign) JMIconType jmIconType;

+ (instancetype)iconWithType:(JMIconType)type;
+ (UIBezierPath*)pathForType:(JMIconType)type inRect:(CGRect)rect;

@end
