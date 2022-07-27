//
//  JumioNavigationBarTitleImageView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JumioCore/JumioAppearance.h>

/**
 * UIView that implements JumioAppearance protocol that is used to define the uiimage that is - when set - drawn instead of the NavigationBar title.
 * Please check out our Surface Tool https://jumio.github.io/surface-ios/ to see what customization options are supported.
 **/
__attribute__((visibility("default"))) @interface JumioNavigationBarTitleImageView :  UIImageView <JumioAppearance>

/**
 * UIImage object that is drawn instead of the title in the UINavigationBar.
 **/
@property (nonatomic, strong) UIImage *titleImage UI_APPEARANCE_SELECTOR;


@end


