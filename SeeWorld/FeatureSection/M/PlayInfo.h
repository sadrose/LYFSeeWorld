//
//  PlayInfo.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface PlayInfo : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double width;
@property (nonatomic, assign) double height;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *url;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
