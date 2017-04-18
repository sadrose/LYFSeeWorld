//
//  HyTableViewFooterView.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/1/16.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface HyTableViewFooterView : UIView
@property (weak, nonatomic) IBOutlet UIImageView *outImageViwe;
@property (weak, nonatomic) IBOutlet UIImageView *inImageView;
+ (instancetype) loadView;
@end
