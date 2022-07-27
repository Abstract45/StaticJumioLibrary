//
//  JMHelpAnimationView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JumioCore/JMStateMachine.h>
#import <JumioCore/JMHelpIconView.h>

__attribute__((visibility("default"))) @interface JMHelpAnimationView : UIView

@property (nonatomic) JMHelpAnimationViewCombination iconCombination;

@property (nonatomic, strong) JMStateMachine* stateMachine;

@property (nonatomic, strong) JMHelpIconView *overlayView;
@property (nonatomic, strong) JMHelpIconView *idView;

@property (nonatomic, strong) NSLayoutConstraint *idConstraintY;
@property (nonatomic, strong) NSLayoutConstraint *idConstraintX;
@property (nonatomic, strong) NSLayoutConstraint *overlayConstraintY;
@property (nonatomic, strong) NSLayoutConstraint *overlayConstraintX;

- (void) startAnimation;
- (void) resetAnimation;
- (void) cleanUp;

- initWithIconCombination:(JMHelpAnimationViewCombination) combination;

- (void) initStateMachine;
- (void) scheduleNextKeyFrame;
- (void)scheduleNextKeyFrameWithDelay:(float)delay;

- (JMStateTransition*) transitionForNextState;
- (NSString*) transitionEventForNextState;

- (void) addOverlayAndIdViewForAnimationCombination:(JMHelpAnimationViewCombination) combination;

@end
