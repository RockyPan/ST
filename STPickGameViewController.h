//
//  STPickGameViewController.h
//  ST
//
//  Created by PanKyle on 14-6-4.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STPickGameViewController;

@protocol STPicGameViewControllerDelegate <NSObject>

- (void)pickGameViewController:(STPickGameViewController *)controller didSelectGame:(NSString *)game;

@end

@interface STPickGameViewController : UITableViewController

@property (nonatomic, weak) id <STPicGameViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString * game;

@end
