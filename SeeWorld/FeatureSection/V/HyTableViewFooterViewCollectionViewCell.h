//
//  HyTableViewFooterViewCollectionViewCell.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/1/16.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "YYKit.h"
#import "DataModels.h"
#import "HyHelper.h"

@interface HyTableViewFooterViewCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subLabel;
@property (weak, nonatomic) IBOutlet UIButton *moreButton;
@property (nonatomic, strong) ItemList *list;
@end
