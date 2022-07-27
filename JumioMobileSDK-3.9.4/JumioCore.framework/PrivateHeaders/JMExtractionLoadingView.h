//
//  JMExtractionLoadingView.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "JMBaseView.h"
#import "JMCircularLoadingView.h"

__attribute__((visibility("default"))) @interface JMExtractionLoadingView : JMBaseView

@property (nonatomic, strong) JMCircularLoadingView *loadingView;

@end
