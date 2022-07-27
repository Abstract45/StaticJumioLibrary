//
//  NetverifyViewController.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Netverify/NetverifyConfiguration.h>
#import <Netverify/NetverifyDocumentData.h>
#import <JumioCore/JMNavigationController.h>

/**
 * Handles setup and presentation of the Netverify Mobile SDK.
 */
__attribute__((visibility("default"))) @interface NetverifyViewController : JMNavigationController

/** Create an instance of the Netverify SDK.
 @param configuration The configuration that is used for the current instance
 @return An initialized NetverifyViewController instance
 @throws an NSException if NetverifyConfiguration is not configured correctly. Please note that in Swift you need to catch the underlaying exception and translate it into NSError. Please check out our sample project if you need more information. */
- (instancetype _Nonnull) initWithConfiguration:(NetverifyConfiguration* _Nonnull)configuration;

/**
 * @return the Netverify Mobile SDK version.
 */
+ (NSString* _Nonnull) sdkVersion;

/**
 * @return a sessionID if sendDebugInfoToJumio is set to YES.
 */
- (NSUUID* _Nullable) debugID;

/**
 * Call this method to destroy the NetverifyViewController instance, before you set it to nil.
 */
- (void) destroy;
@end
