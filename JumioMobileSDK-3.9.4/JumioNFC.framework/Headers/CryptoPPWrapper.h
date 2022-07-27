//
//  CryptoPPWrapper.h
//
//  Copyright © 2021 Jumio. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PACEKeyPair;
@class PACEPublicKey;
@class ECParameterSpec;

@interface CryptoPPWrapper : NSObject

// HASH
-(instancetype)initWithHashAlgorithm:(NSString*)algorithm;
-(void) updateWithData:(NSData*)data;
-(NSData*) finalizeHash;

// CIPHER
-(instancetype)initWithAlgorithm:(NSString*)algorithm;
-(void) initializeWithMode:(NSInteger)mode keyData:(NSData*)keyData ivData:(NSData*)ivData;
-(NSData*) finalizeWithData:(NSData*)data;

// MAC (MessageAuthenticationCode)
-(void) initializeMACWithKeyData:(NSData*)keyData;
-(NSData*) finalizeMACWithData:(NSData*)data;
-(void) verifyMACWithData:(NSData*)data inputData:(NSData*)inputData keyData:(NSData*)keyData;

// ECDH
+(PACEKeyPair*)createKeyPairWithParameters:(ECParameterSpec*)parameterSpec; // maybe we have to use a different parameter spec type in future
+(PACEPublicKey*)generateECDHPublicKeyWithX:(NSData*)x y:(NSData*)y parameterSpec:(ECParameterSpec*)parameterSpec;
+(NSData*)createSharedSecretPointWithX:(NSData*)x y:(NSData*)y privateKey:(NSData*)privateKey parameterSpec:(ECParameterSpec*)parameterSpec;
+(NSData*)createSharedSecretWithPublicKey:(PACEPublicKey*)publicKey privateKey:(NSData*)privateKey parameterSpec:(ECParameterSpec*)parameterSpec;
+(ECParameterSpec*)createEphemeralGeneratorPointWithNonce:(NSData*)nonceData sharedSecretX:(NSData*)secretX sharedSecretY:(NSData*)secretY parameterSpec:(ECParameterSpec*)parameterSpec;

@end
