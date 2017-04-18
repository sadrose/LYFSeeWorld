//
//  SectionList.h
//
//  Created by Lyf on 16/11/25.
//  Copyright © 2016年 com.MYTM. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Header.h"


@interface SectionList : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) Header *header;
@property (nonatomic, strong) id footer;
@property (nonatomic, assign) double sectionListIdentifier;
@property (nonatomic, assign) double count;
@property (nonatomic, strong) id adTrack;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSArray *itemList;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
