//
//  HomeTableViewCell.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/1/16.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataModels.h"
@interface HomeTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageViewCell;
@property (assign, nonatomic, readonly) BOOL isAnimations;
@property (weak, nonatomic) IBOutlet UIView *maskView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subTitle;
@property (weak, nonatomic) IBOutlet UILabel *textLabels;
@property (nonatomic, assign) BOOL isHighlightRow;
@property (nonatomic, strong) ItemList *data;

- (void)setIsHighlightRow:(BOOL)isHighlightRow AtIsAnimation:(BOOL)animations;

@end
