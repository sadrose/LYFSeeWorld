//
//  NSString+FindCellSize.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/2/4.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>

static  NSString  * _Nonnull horizontalScrollCard = @"horizontalScrollCard";
static  NSString  * _Nonnull rectangleCard        = @"rectangleCard";
static  NSString  * _Nonnull squareCard           = @"squareCard";

static  NSString  * _Nonnull videoCollectionOfHorizontalScrollCard = @"videoCollectionOfHorizontalScrollCard";
static  NSString  * _Nonnull horizontalScrollCardSection           = @"horizontalScrollCardSection";
static  NSString  * _Nonnull videoListSection                      = @"videoListSection";
static  NSString  * _Nonnull authorSection                         = @"authorSection";


@interface NSString (FindCellSize)

- (CGSize)getCellSize;

@end
