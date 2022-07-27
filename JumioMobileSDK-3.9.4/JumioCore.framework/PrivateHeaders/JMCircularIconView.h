//
//  JMCircularIconView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    JMCircularIconViewStateEmpty = 0,
    JMCircularIconViewStateError,
    JMCircularIconViewStateSuccess,
    JMCircularIconViewStateLoading,
} JMCircularIconViewState;

__attribute__((visibility("default"))) @interface JMCircularIconView : UIView

- (void) setState:(NSInteger)state;

@end

