//
//  NetverifyConfiguration.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Netverify/NetverifyDocumentData.h>
#import <Netverify/NetverifyProtocol.h>
#import <JumioCore/JMSDK.h>

#ifndef NetverifyConfiguration_h
#define NetverifyConfiguration_h

/**
 * Defines if whatchlist screening is enabled or disabled
 **/
typedef NS_ENUM(NSUInteger, NetverifyWatchlistScreening) {
    /** Standard setting, makes use of sever settings */
    NetverifyWatchlistScreeningDefault = 0,
    /** Enable whatchlist screening */
    NetverifyWatchlistScreeningEnabled,
    /** Disable whatchlist screening */
    NetverifyWatchlistScreeningDisabled
};



/**
 * The type of confirmation that should be displayed
 */
typedef NS_ENUM(NSUInteger, NetverifyConfirmationType) {
    /** Generic confirmation to check if everything is readable and glare free */
    NetverifyConfirmationTypeGeneric,
    /** The user should confirm that the scanned side matches the requested one */
    NetverifyConfirmationTypeCheckDocumentSide,
    /** Document is being analyzed, the user should not be able to confirm or retake */
    NetverifyConfirmationTypeAnalyzing,
    /** Analysis passed document, the user should be able to confirm */
    NetverifyConfirmationTypeAnalyzingResponsePass,
    /** Analysis rejected document, the user should be able to retry */
    NetverifyConfirmationTypeAnalyzingResponseReject
};

/**
 * Netverify Settings class that is used to configure all available functional settings of NetverifyViewController or NetverifyUIController.
 **/
__attribute__((visibility("default"))) @interface NetverifyConfiguration : NSObject <NSCopying>

/**
 * The API token of your Jumio merchant account
 **/
@property (nonatomic, strong, nullable) NSString* apiToken;

/**
 * The corresponding API secret
 **/
@property (nonatomic, strong, nullable) NSString* apiSecret;

/**
 *  One-time session authorization token to initialize the SDK instead of apiToken and apiSecret.
 *  Token can be retrieved via the server-side /account call.
 */
@property (nonatomic, strong, nullable) NSString* authorizationToken;

/**
 * Identify the scan in the Jumio merchant UI. (Maximum characters: 100)
 * Will not be used in case authorizationToken is set - use this setting within the server-side /account call instead.
 **/
@property (nonatomic, strong, nullable) NSString* customerInternalReference;

/**
 * Identify the scan in your reports. Set it to nil if you don't use it. (Maximum characters: 100)
 * Will not be used in case authorizationToken is set - use this setting within the server-side /account call instead.
 **/
@property (nonatomic, strong, nullable) NSString* reportingCriteria;

/**
 * Specifiy the DataCenter that should be used
 **/
@property (nonatomic, assign) JumioDataCenter dataCenter;

/**
 * Set this token to use the SDK offline
 **/
@property (nonatomic, strong, nullable) NSString* offlineToken;

/**
 * A delegate implementing the NetverifyViewControllerDelegate protocol
 **/
@property (nonatomic, weak, nullable) id<NetverifyViewControllerDelegate> delegate;

/**
 * A delegate implementing the NetverifyUIControllerDelegate protocol. Only use this when using Custom UI.
 **/
@property (nonatomic, weak, nullable) id<NetverifyUIControllerDelegate> customUIDelegate;

/**
 * Specify a country to skip selection by the user (format: ISO 3166-1 Alpha 3 code)
 **/
@property (nonatomic, strong, nullable) NSString* preselectedCountry;

/**
 * Preselect selection to one or more documentTypes to restrict or skip selection by the user
 **/
@property (nonatomic, assign) NetverifyDocumentType preselectedDocumentTypes;

/**
 * Specify a document variant to skip selection by the user
 **/
@property (nonatomic, assign) NetverifyDocumentVariant preselectedDocumentVariant;

/**
 * Enable a face match check between a camera still image and the document front side (default: YES)
 * Will not be used in case authorizationToken is set - use this setting within the server-side /account call instead.
 **/
@property (nonatomic, assign) BOOL enableIdentityVerification;

/**
 * Enable verification of a scanned identity (default: YES)
 * Will not be used in case authorizationToken is set - use this setting within the server-side /account call instead.
 **/
@property (nonatomic, assign) BOOL enableVerification;

/**
 * Specifies how the user is registered on your system. For example, you can use an email address, user name, or account number. Optional. (Maximum characters: 100)
 * Will not be used in case authorizationToken is set - use this setting within the server-side /account call instead.
 **/
@property (nonatomic, strong, nullable) NSString* userReference;

/**
 * Set watchlist screening on transaction level. Enable to override the default search, or disable watchlist screening for this transaction.
 **/
@property (nonatomic, assign) NetverifyWatchlistScreening watchlistScreening;

/**
 * Search profile for watchlist screening. Optional.
 **/
@property (nonatomic, strong, nullable) NSString* watchlistSearchProfile;

/**
 * Set the default camera position
 **/
@property (nonatomic, assign) JumioCameraPosition cameraPosition;

/**
 * Callback URL (max. 255 characters) for the confirmation after the verification is completed.
 * This setting overrides your Jumio merchant settings.
 * Will not be used in case authorizationToken is set.
 **/
@property (nonatomic, strong, nullable) NSString *callbackUrl;

/**
 * Use the following method to only support IDs where data can be extracted on mobile only
 **/
@property (nonatomic, assign) BOOL dataExtractionOnMobileOnly;

/**
 * Use the following method to explicitly send debug-info to Jumio. (default: NO)
 * Only set this property to YES if you are asked by our Jumio support personal.
 **/
@property (nonatomic, assign) BOOL sendDebugInfoToJumio;

/**
 * Configure the status bar style for the duration NetverifyViewController is presented
 **/
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;

@end

#endif
