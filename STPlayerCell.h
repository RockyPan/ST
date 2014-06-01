//
//  STPlayerCell.h
//  ST
//
//  Created by PanKyle on 14-6-1.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STPlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel * name;
@property (nonatomic, weak) IBOutlet UILabel * game;
@property (nonatomic, weak) IBOutlet UIImageView * rating;

@end
