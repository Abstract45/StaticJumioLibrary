//
//  JumioApperance.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Protocol that is used for all UI Objects to be customized via UIAppearance
 */
__attribute__((visibility("default"))) @protocol JumioAppearance <NSObject>

/**
 * @return the instance of the class for UIAppearance
 **/
+ (instancetype _Nonnull)jumioAppearance;

@end
