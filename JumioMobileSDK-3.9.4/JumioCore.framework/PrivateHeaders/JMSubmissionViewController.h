//
//  JMSubmissionViewController.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import "JMViewController.h"
#import "JMStateMachine.h"

extern NSString* const kSubmissionStateUploadInProgress;
extern NSString* const kSubmissionStateUploadSuccessful;
extern NSString* const kSubmissionStateUploadFailed;

extern NSString* const kSubmissionTransitionEventToUploadSuccessful;
extern NSString* const kSubmissionTransitionEventToUploadFailed;
extern NSString* const kSubmissionTransitionEventToUploadInProgress;

extern NSString* const kSubmissionTransitionToUploadSuccessful;
extern NSString* const kSubmissionTransitionToUploadFailed;
extern NSString* const kSubmissionTransitionToUploadInProgress;

__attribute__((visibility("default"))) @interface JMSubmissionViewController : JMViewController

@property (nonatomic, strong, readonly) JMStateMachine* stateMachine;
@property (nonatomic, strong) JMActionView *actionView;

- (void) updateStateToUploading;
- (void) updateStateToUploadSuccessful;
- (void) updateStateToUploadFailedWithError: (NSError *) error;

- (JMStateMachine*) createStateMachine;

- (void)activateStateMachine;

@end


