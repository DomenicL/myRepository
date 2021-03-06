//
//  GuideTableView.m
//  琥珀旅行游记
//
//  Created by 李迪琛 on 16/2/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import "GuideTableView.h"
#import "GuideCell.h"
#import "GuidesViewController.h"
#import "DetailViewController.h"

#define GuideCellReuseIdentifier @"GuideReuseCell"
#define kCellHeight 120

@interface GuideTableView () <UITableViewDelegate, UITableViewDataSource>

@end

@implementation GuideTableView

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        [self setupConfig];
    }
    return self;
}

- (void)setupConfig{
    self.delegate = self;
    self.dataSource = self;
}

#pragma mark - UITableView Delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    UIStoryboard *detailSB = [UIStoryboard storyboardWithName:@"ScenicSpot" bundle:nil];
    DetailViewController *detailVC = [detailSB instantiateViewControllerWithIdentifier:DetailVCIdentifier];
    detailVC.guideModel = self.modelArray[indexPath.row];
    [((GuidesViewController *)self.nextResponder.nextResponder).navigationController pushViewController:detailVC animated:YES];
    
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return kCellHeight;
}

#pragma mark - UITableView DataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.modelArray.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    GuideCell *cell = [tableView dequeueReusableCellWithIdentifier:GuideCellReuseIdentifier forIndexPath:indexPath];
    cell.guideModel = self.modelArray[indexPath.row];
    return cell;
}

@end
