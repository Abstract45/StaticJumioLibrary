//
//  JumioScanOverlayView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JumioCore/JumioAppearance.h>

/**
 * UIView that implements JumioAppearance protocol that is used to tint our scan overlays.
 * Please check out our Surface Tool https://jumio.github.io/surface-ios/ to see what customization options are supported.
 **/
__attribute__((visibility("default"))) @interface JumioScanOverlayView : UIView <JumioAppearance>


/**
 * Set the UIColor that should be used for all standard scan overlays
 **/
@property (nonatomic, strong) UIColor *colorOverlayStandard UI_APPEARANCE_SELECTOR;
/**
 * Set the UIColor that should be used when highlighting a valid scan
 **/
@property (nonatomic, strong) UIColor *colorOverlayValid UI_APPEARANCE_SELECTOR;
/**
 * Set the UIColor that should be used when highlighting a invalid scan
 **/
@property (nonatomic, strong) UIColor *colorOverlayInvalid UI_APPEARANCE_SELECTOR;
/**
 * Set the UIColor that should be used as fill for the MRZ scan overlays
 **/
@property (nonatomic, strong) UIColor *colorOverlayFill UI_APPEARANCE_SELECTOR;

/**
 * Set the UIColor for the background of the scan view
 **/
@property (nonatomic, strong) UIColor *scanBackgroundColor UI_APPEARANCE_SELECTOR;

@end
