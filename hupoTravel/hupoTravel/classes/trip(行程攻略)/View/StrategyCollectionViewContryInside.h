//
//  StrategyCollectionViewContryInside.h
//  琥珀旅行
//
//  Created by 朱晓涵 on 16/2/23.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

//国内界面
@interface StrategyCollectionViewContryInside : UICollectionView<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

//数据接收
@property (nonatomic, copy) NSDictionary *dicData;

@end
