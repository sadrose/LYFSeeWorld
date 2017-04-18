//
//  FindCollectionViewCell.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/2/4.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "ZYBannerView.h"
#import "HyHelper.h"
#import "DataModels.h"
#import "NSString+FindCellSize.h"

@interface FindCollectionViewCell : UICollectionViewCell <ZYBannerViewDelegate,ZYBannerViewDataSource>
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *titlelabel;
@property (weak, nonatomic) IBOutlet ZYBannerView *bannerView;
@property (strong, nonatomic)        ItemList *list;

- (void)setIsHighlightRow:(BOOL)isHighlightRow AtIsAnimation:(BOOL)animations;
@end
