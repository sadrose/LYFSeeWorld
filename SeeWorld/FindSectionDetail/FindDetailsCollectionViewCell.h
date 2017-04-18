//
//  FindDetailsCollectionViewCell.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/2/4.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataModels.h"

@interface FindDetailsCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageViewHLayoutH;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subLabel;
@property (nonatomic, strong) ItemList *list;

@end
