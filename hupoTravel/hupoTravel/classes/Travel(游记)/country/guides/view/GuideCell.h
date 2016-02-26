//
//  GuideCell.h
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GuideModel.h"

@interface GuideCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *backImageView;
@property (weak, nonatomic) IBOutlet UILabel *topicLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

@property (nonatomic, strong) GuideModel *guideModel;

@end
