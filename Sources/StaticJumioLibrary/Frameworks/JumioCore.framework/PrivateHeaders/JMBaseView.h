//
//  JMBaseView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

__attribute__((visibility("default"))) @interface JMBaseView : UIView {
    @protected
    BOOL _shouldUpdateViewConstraints;
    BOOL _shouldUpdateSuperViewConstraints;
}

@property (nonatomic, strong, readonly) UIView* visualEffectView;

- (void) initControl;
- (void) hideSensitiveData:(BOOL)hide;
- (void) updateViewForOrientation:(UIInterfaceOrientation)interfaceOrientation;

- (instancetype) initWithVisualEffect: (UIVisualEffect*) visualEffect;
- (UIView*)contentView;
- (void) addSubviewToVisualEffectView:(UIView *)view;

@end
