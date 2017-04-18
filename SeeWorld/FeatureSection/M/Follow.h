//
//  Follow.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface Follow : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) BOOL followed;
@property (nonatomic, strong) NSString *itemType;
@property (nonatomic, assign) double itemId;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
