//
//  Tags.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//


#import <Foundation/Foundation.h>



@interface Tags : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double tagsIdentifier;
@property (nonatomic, strong) NSString *actionUrl;
@property (nonatomic, assign) id adTrack;
@property (nonatomic, strong) NSString *name;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
