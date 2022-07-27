//
//  OpenSSLWrapper.h
//
//  Copyright © 2021 Jumio. All rights reserved.
//

#import <Foundation/Foundation.h>

@class X509Wrapper;
@class ECPublicKeyWrapper;

@interface OpenSSLWrapperError : NSError

@property (nonatomic, strong) NSString* reason;

+(OpenSSLWrapperError*)unexpected;

@end

@interface OpenSSLWrapper : NSObject

+(void)loadOpenSSL;
+(void)cleanupOpenSSL;
+(NSArray<X509Wrapper*>*)getX509CertificatesFromPKCS7:(NSData*)pkcs7Der error:(OpenSSLWrapperError**)error;
+(X509Wrapper*)verifyTrustAndGetIssuerCertificate:(X509Wrapper*)x509 caFile:(NSData*)caFile error:(OpenSSLWrapperError**)error;
+(NSData*)verifyAndGetSignedDataFromPKCS7:(NSData*)pkcs7Der error:(OpenSSLWrapperError**)error;
+(ECPublicKeyWrapper*)readECPublicKey:(NSData*)data error:(OpenSSLWrapperError**)error;
+(BOOL)verifyECDSASignature:(ECPublicKeyWrapper*)publicKey signature:(NSData*)signature data:(NSData*)data;

// X509-related
+(NSString*)getFingerprint:(X509Wrapper*)x509;
+(NSString*)getNotBeforeDate:(X509Wrapper*)x509;
+(NSString*)getNotAfterDate:(X509Wrapper*)x509;
+(NSString*)getSerialNumber:(X509Wrapper*)x509;
+(NSString*)getSignatureAlgorithm:(X509Wrapper*)x509;
+(NSString*)getPublicKeyAlgorithm:(X509Wrapper*)x509;
+(NSString*)getIssuerName:(X509Wrapper*)x509;
+(NSString*)getSubjectName:(X509Wrapper*)x509;

@end
