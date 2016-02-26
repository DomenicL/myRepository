//
//  BrowseCollectionViewCell.h
//  琥珀旅行
//
//  Created by 朱晓涵 on 16/2/23.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class StrategyCollectionCellModel;
@interface BrowseCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIButton *browseNameButton;
@property (nonatomic, strong) StrategyCollectionCellModel *brownCellModel;

@end
