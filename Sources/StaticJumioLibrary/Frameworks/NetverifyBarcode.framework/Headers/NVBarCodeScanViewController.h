//
//  NVBarCodeScanViewController.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import "NVGenericScanViewController.h"

__attribute__((visibility("default"))) @interface NVBarCodeScanViewController : NVGenericScanViewController

@property (nonatomic, readonly) BOOL isProcessing; // YES if image is being processed for barcode recognition

- (void) stopScanning;
- (void) startScanning;

@end
