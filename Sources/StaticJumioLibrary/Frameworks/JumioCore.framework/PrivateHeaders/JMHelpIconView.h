//
//  JMHelpIconView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JumioCore/JumioBaseView.h>

typedef NS_ENUM(NSUInteger, JMHelpIconType) {
    JMHelpIconNone = 0,
    
    JMHelpIconRVFace,
    JMHelpIconRVOval,
    JMHelpIconRVFaceAngleFace,
    JMHelpIconRVFaceAngleSmartphone,
    JMHelpIconRVLightSource,
    JMHelpIconRViProovFrame
};

typedef struct {
    NSInteger idType;
    NSInteger overlayType;
} JMHelpAnimationViewCombination;


__attribute__((visibility("default"))) @interface JMHelpIconView : JumioBaseView

@property (nonatomic, assign) NSInteger iconType;
@property (nonatomic, assign) int state;

+ (instancetype) iconViewWithType:(NSInteger)type;

@end
