//
//  SectionReusableView.h
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SectionReusableView : UICollectionReusableView
@property (weak, nonatomic) IBOutlet UILabel *areaName;
@property (nonatomic, copy) NSString *name;

@end
