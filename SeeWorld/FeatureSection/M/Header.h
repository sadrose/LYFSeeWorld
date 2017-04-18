//
//  Header.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Follow;

@interface Header : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) Follow *follow;
@property (nonatomic, assign) double headerIdentifier;
@property (nonatomic, strong) NSString *actionUrl;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) id label;
@property (nonatomic, strong) NSString *headerDescription;
@property (nonatomic, strong) NSString *cover;
@property (nonatomic, strong) NSString *font;
@property (nonatomic, strong) NSString *icon;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
