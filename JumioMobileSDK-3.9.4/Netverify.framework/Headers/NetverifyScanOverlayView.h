//
//  NetverifyScanOverlayView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <JumioCore/JumioAppearance.h>
#import <JumioCore/JumioScanOverlayView.h>

/**
 * UIView that implements JumioAppearance protocol that is used to tint our scan overlays.
 * Please check out our Surface Tool https://jumio.github.io/surface-ios/ to see what customization options are supported.
 **/
__attribute__((visibility("default"))) @interface NetverifyScanOverlayView : JumioScanOverlayView <JumioAppearance>

@end
