//
//  AuthorVideoSetViewController.h
//  OpenEyesDemo
//
//  Created by Lyf on 17/1/16.
//  Copyright © 2017年 com.MYTM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetworkRequestManage.h"
#import "HyInteractiveTransition.h"
#import "HyHelper.h"
#import "YYKit.h"
@interface AuthorVideoSetViewController : UIViewController
@property (nonatomic, assign) CGRect startFrame;
@property (nonatomic, strong) id     resources;
@property (nonatomic, strong) HyInteractiveTransition *transitionManage;
@end
