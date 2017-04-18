//
//  BaseClass.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//


#import <Foundation/Foundation.h>



@interface BaseClass : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSArray *itemList;
@property (nonatomic, assign) id dialog;
@property (nonatomic, assign) double count;
@property (nonatomic, assign) double date;
@property (nonatomic, strong) NSArray *sectionList;
@property (nonatomic, assign) double nextPublishTime;
@property (nonatomic, strong) NSString *nextPageUrl;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
