//
//  JMSDK.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    JumioDataCenterUS,
    JumioDataCenterEU,
    JumioDataCenterSG
} JumioDataCenter;

typedef enum {
    JumioCameraPositionBack,
    JumioCameraPositionFront
} JumioCameraPosition;

/**
 * The reason why a scan for a part has been unsuccessful
 **/
typedef NS_ENUM(NSUInteger, JumioFaceRetryReason) {
    /** Device is in landscape */
    JumioFaceRetryReasonDeviceInLandscape,
    /** iProov: A generic error occured for LA */
    JumioFaceRetryReasonIProovGeneric,
    /** iProov: A generic error occured for GPA */
    JumioFaceRetryReasonIProovGPA,
    
};

extern NSString * const kJMSDKBundleShortVersionKey;
extern NSString * const kJMSDKBundleVersionKey;

__attribute__((visibility("default"))) @interface JMSDK : NSObject

@property (nonatomic, strong) NSBundle * bundle;
@property (nonatomic, strong, readonly) NSDictionary * plistDictionary;

- (NSString*)shortVersionString;

- (NSString*)versionString;

- (NSString*)sdkVersionString;

- (NSString*)sdkVersionStringFull;

- (NSString*)bundleValueForKey:(NSString* const)key;

+ (NSString*)clientAppVersionStringFull;

+ (BOOL) isJumioCoreAvailable;
+ (BOOL) isBAMCheckoutAvailable;
+ (BOOL) isNetverifyAvailable;
+ (BOOL) isIProovAvailable;
+ (BOOL) isMicroBlinkAvailable;
+ (BOOL) isNetverifyBarcodeFrameworkAvailable;
+ (BOOL) isJumioIProovFrameworkAvailable;
+ (BOOL) isJumioNFCAvailable;

@end
