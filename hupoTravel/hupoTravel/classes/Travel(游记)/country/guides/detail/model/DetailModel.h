//
//  DetailModel.h
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import "JSONModel.h"

@interface DetailModel : JSONModel

@property (nonatomic, copy) NSString *introduce;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, copy) NSNumber *ID;
@property (nonatomic, strong) NSDictionary *photo;

@end
