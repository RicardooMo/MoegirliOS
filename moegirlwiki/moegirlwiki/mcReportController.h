//
//  mcReportController.h
//  moegirlwiki
//
//  Created by Chen Junlin on 14-7-30.
//  Copyright (c) 2014年 me.masterchan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mcReportController : UIViewController<UIPickerViewDelegate>{}

@property (strong, nonatomic) NSString *rtitle;
@property (strong, nonatomic) NSString *rcontent;
@property (strong, nonatomic) NSString *rerror;

@property (weak, nonatomic) IBOutlet UIPickerView *thePicker;

@end
