//
//  NetverifyNegativeButton.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <JumioCore/JumioNegativeButton.h>

/**
 * UIButton that implements JumioAppearance protocol that is used within our confirmation or error views and invokes a negative action (e.g. cancel, retry).
 * Please check out our Surface Tool https://jumio.github.io/surface-ios/ to see what customization options are supported.
 **/
__attribute__((visibility("default"))) @interface NetverifyNegativeButton : JumioNegativeButton

@end
