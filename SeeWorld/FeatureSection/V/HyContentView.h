//
//  HyContentView.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/1/16.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HyContentView : UIView
@property (weak, nonatomic) IBOutlet UIView *maskView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, assign) double date;
+ (instancetype) loadView;
@end
