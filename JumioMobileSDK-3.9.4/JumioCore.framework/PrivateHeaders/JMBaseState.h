//
//  JMBaseState.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef JM_BASE_STATE_H
#define JM_BASE_STATE_H

@class JMStateMachine;
@class JMStateTransition;

__attribute__((visibility("default"))) @interface JMBaseState : NSObject <NSCopying>

@property (nonatomic, strong, readonly) NSString*       name;
@property (nonatomic, weak)             JMStateMachine* stateMachine;

@property (nonatomic, strong) void (^willEnterStateBlock)(JMStateTransition *);
@property (nonatomic, strong) void (^didEnterStateBlock)(JMStateTransition *);
@property (nonatomic, strong) void (^willExitStateBlock)(JMStateTransition *);
@property (nonatomic, strong) void (^didExitStateBlock)(JMStateTransition *);

- (instancetype)initWithName:(NSString*)name;

- (void) cleanUp;

@end

#endif
