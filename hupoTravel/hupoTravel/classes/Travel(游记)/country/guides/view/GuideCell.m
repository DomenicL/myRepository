//
//  GuideCell.m
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import "GuideCell.h"

@implementation GuideCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)setGuideModel:(GuideModel *)guideModel{
    if (_guideModel != guideModel) {
        _guideModel = guideModel;
        self.topicLabel.text = _guideModel.topic;
        self.detailLabel.text = [NSString stringWithFormat:@"- %@条旅行灵感 -", _guideModel.inspiration_activities_count];
        [self.backImageView sd_setImageWithURL:[NSURL URLWithString:_guideModel.photo_url]];
    }
}

@end
