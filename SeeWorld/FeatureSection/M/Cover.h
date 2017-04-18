//
//  Cover.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//


#import <Foundation/Foundation.h>



@interface Cover : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSString *blurred;
@property (nonatomic, assign) id sharing;
@property (nonatomic, strong) NSString *detail;
@property (nonatomic, strong) NSString *feed;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
