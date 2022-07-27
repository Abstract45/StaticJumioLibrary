//
//  NVPassportReaderCallback.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

__attribute__((visibility("default"))) @protocol NVPassportReaderCallback <NSObject>

-(void)passportReaderShouldAnalyzeInformation:(NSString*)information metaInfo:(NSDictionary*)metaInfo;
-(void)passportReaderDidFinishReadingPassport:(NSDictionary *)passport silentlyFailAttempt:(BOOL)isSilentlyFailAttempt;
-(void)passportReaderDidFailWithError:(NSError*)error silentlyFailAttempt:(BOOL)isSilentlyFailAttempt;
-(void)passportReaderUserDidCancelAndIsSilentlyFailAttempt:(BOOL)isSilentlyFailAttempt;
-(void)passportReaderSessionDidTimeoutAndIsSilentlyFailAttempt:(BOOL)isSilentlyFailAttempt;
-(void)passportReaderStartedReading;

@end
