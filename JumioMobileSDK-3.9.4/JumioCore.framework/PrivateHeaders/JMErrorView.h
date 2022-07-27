//
//  JMErrorView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <JumioCore/JMActionView.h>
#import <JumioCore/JMPositiveButton.h>
#import <JumioCore/JMNegativeButton.h>

@class JMErrorView;

__attribute__((visibility("default"))) @protocol JMErrorViewDelegate <NSObject>

- (void) errorViewDidPerformCancelAction: (nullable JMErrorView *) errorView;
- (void) errorViewDidPerformRetryAction: (nullable JMErrorView *) errorView;

@end

__attribute__((visibility("default"))) @interface JMErrorView : JMActionView

@property (nonatomic, nullable, weak) id<JMErrorViewDelegate> delegate;
@property (nonatomic, nullable, readonly) NSError* error;

@property (nonatomic, nullable, strong) JMNegativeButton* buttonCancel;
@property (nonatomic, nullable, strong) JMPositiveButton* buttonRetry;

- (nullable instancetype) initWithError: (nullable NSError *) error retryable: (BOOL) retryable delegate: (nullable id<JMErrorViewDelegate>) delegate;

- (NSString* _Nullable)titleForError:(NSInteger)error;
@end
