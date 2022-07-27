//
//  JumioBaseView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JumioCore/JumioAppearance.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Base class which is used to set our SDK via UIAppearance pattern
 * Please check out our Surface Tool https://jumio.github.io/surface-ios/ to see what customization options are supported.
 **/
__attribute__((visibility("default"))) @interface JumioBaseView : UIView <JumioAppearance>

/**
 * Disable blurred background by setting this property to true.
 **/
@property (nonatomic, strong) NSNumber *disableBlur UI_APPEARANCE_SELECTOR;

/**
 * Sets the blur style to dark theme which is applied before all other customization options. Light blur is used as standard.
 **/
@property (nonatomic, strong) NSNumber *enableDarkMode UI_APPEARANCE_SELECTOR;

/**
 * Sets the color of the foreground. If nil the standard color will be used.
 **/
@property (nonatomic, strong, nullable) UIColor *foregroundColor UI_APPEARANCE_SELECTOR;

/**
 * Set the font name of your light font used within the application.
 **/
@property (nonatomic, strong, nullable) NSString *customLightFontName UI_APPEARANCE_SELECTOR;

/**
 * Set the fontname of your regular font used within the application.
 **/
@property (nonatomic, strong, nullable) NSString *customRegularFontName UI_APPEARANCE_SELECTOR;

/**
 * Set the fontname of your medium font used within the application.
 **/
@property (nonatomic, strong, nullable) NSString *customMediumFontName UI_APPEARANCE_SELECTOR;

/**
 * Set the fontname of your bold font used within the application.
 **/
@property (nonatomic, strong, nullable) NSString *customBoldFontName UI_APPEARANCE_SELECTOR;

/**
 * Set the fontname of your regular italic font used within the application.
 **/
@property (nonatomic, strong, nullable) NSString *customItalicFontName UI_APPEARANCE_SELECTOR;

@end

NS_ASSUME_NONNULL_END
