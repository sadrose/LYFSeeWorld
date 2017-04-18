//
//  FindDetailsTableHeaderView.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/2/4.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "HyHelper.h"
@interface FindDetailsTableHeaderView : UIView

@property (nonatomic, strong) NSDictionary *categoryInfo;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIView *maskView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subLabel;

+ (instancetype) loadView;
@end
