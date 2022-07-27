//
//  NetverifyIProovScanView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JumioCore/JumioAppearance.h>

/**
 * UIView that implements JumioAppearance protocol. View is used to cusotmize iProov view for face scanning.
 * Please check out our Surface Tool https://jumio.github.io/surface-ios/ to see what customization options are supported.
 **/
__attribute__((visibility("default"))) @interface NetverifyIProovScanView : UIView <JumioAppearance>

/**
 * Sets the color that should be used as iProov liveness tint. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovLivenessTintColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov line. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovLineColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov ready tint color for GPA. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovReadyTintColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov not ready tint color for GPA. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovNotReadyTintColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov header text color. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovHeaderTextColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov header background color. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovHeaderBackgroundColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov close button color. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovCloseButtonTintColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov footer text color. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovFooterTextColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov footer background color. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovFooterBackgroundColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov livenss scanning tint color for GPA. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovLivenessScanningTintColor UI_APPEARANCE_SELECTOR;

/**
 * Sets the color that should be used for iProov progress bar color . If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *iProovProgressBarColor UI_APPEARANCE_SELECTOR;


@end

