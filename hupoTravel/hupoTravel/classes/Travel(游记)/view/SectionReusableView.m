//
//  SectionReusableView.m
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#import "SectionReusableView.h"

@implementation SectionReusableView

- (void)setName:(NSString *)name{
    if (_name != name) {
        _name = name;
        self.areaName.text = name;
    }
}

@end
