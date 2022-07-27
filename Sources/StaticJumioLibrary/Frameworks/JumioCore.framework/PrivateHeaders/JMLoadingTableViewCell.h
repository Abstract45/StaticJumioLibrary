//
//  JMLoadingTableViewCell.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <JumioCore/JMBaseTableViewCell.h>

extern const CGFloat JMLoadingTableViewCellRightMargin;

__attribute__((visibility("default"))) @interface JMLoadingTableViewCell : JMBaseTableViewCell

@property (nonatomic, assign, getter=isLoading) BOOL loading;

@end
