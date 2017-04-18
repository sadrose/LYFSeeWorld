//
//  HyTableViewCellFooterView.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/1/16.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "HyTableViewFooterViewCollectionViewCell.h"
#import "DataModels.h"
#import "YYKit.h"
@interface HyTableViewCellFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (assign, nonatomic) CGFloat h;
@property (nonatomic, strong) UICollectionViewFlowLayout *flowLayout;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageViewHeightLayout;
@property (nonatomic, strong) ItemList *data;

+ (instancetype) loadView;

@end
