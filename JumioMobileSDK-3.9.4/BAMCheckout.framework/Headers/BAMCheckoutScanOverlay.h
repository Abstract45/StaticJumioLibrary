//
//  BAMCheckoutScanOverlay.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JumioCore/JumioAppearance.h>

/**
 * UIView that implements JumioAppearance protocol that is used to tint our scan overlays.
 **/
__attribute__((visibility("default"))) @interface BAMCheckoutScanOverlay : UIView<JumioAppearance>

/**
 * Set the UIColor that should be used for the scan overlay
 **/
@property (nonatomic, strong) UIColor *borderColor UI_APPEARANCE_SELECTOR;

/**
 * Set the UIColor for text elements displayed on the scan overlay
 **/
@property (nonatomic, strong) UIColor *textColor UI_APPEARANCE_SELECTOR;

@end
