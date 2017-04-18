//
//  Consumption.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface Consumption : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double replyCount;
@property (nonatomic, assign) double shareCount;
@property (nonatomic, assign) double collectionCount;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
