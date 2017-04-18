//
//  Author.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Follow;

@interface Author : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) Follow *follow;
@property (nonatomic, assign) double videoNum;
@property (nonatomic, assign) double latestReleaseTime;
@property (nonatomic, assign) double authorIdentifier;
@property (nonatomic, assign) id adTrack;
@property (nonatomic, strong) NSString *link;
@property (nonatomic, strong) NSString *authorDescription;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSString *name;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
