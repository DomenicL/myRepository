//
//  CountryViewController.h
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/9.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CountryViewController : UIViewController

@property (nonatomic, copy) NSArray *dataArray;
@property (nonatomic, copy) NSNumber *cityID;
@property (nonatomic, copy) NSString *cityName;

@property (nonatomic, copy) NSDictionary *searchDataDic;

@end
