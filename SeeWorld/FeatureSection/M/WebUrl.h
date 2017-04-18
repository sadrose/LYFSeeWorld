//
//  WebUrl.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface WebUrl : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSString *raw;
@property (nonatomic, strong) NSString *forWeibo;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
