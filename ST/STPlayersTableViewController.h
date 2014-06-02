//
//  STPlayersTableViewController.h
//  ST
//
//  Created by PanKyle on 14-6-1.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STPlayerDetailViewController.h"

@interface STPlayersTableViewController : UITableViewController <STPlayerDetailViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
