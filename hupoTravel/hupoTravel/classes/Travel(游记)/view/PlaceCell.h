//
//  PlaceCell.h
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/5.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DestinationModel.h"

@interface PlaceCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *destinationImageView;
@property (weak, nonatomic) IBOutlet UILabel *countryNameCN;
@property (weak, nonatomic) IBOutlet UILabel *countryNameEN;
@property (nonatomic, strong) DestinationModel *model;

@end
