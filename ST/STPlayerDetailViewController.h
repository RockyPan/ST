//
//  STPlayerDetailViewController.h
//  ST
//
//  Created by PanKyle on 14-6-2.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STPlayer.h"
#import "STPickGameViewController.h"

@class STPlayerDetailViewController;

@protocol STPlayerDetailViewControllerDelegate <NSObject>
- (void)playerDetailViewControllerDidCancel:(STPlayerDetailViewController *)controller;
- (void)playerDetailViewController:(STPlayerDetailViewController *)controller didAddPlayer:(STPlayer *)player;
@end

@interface STPlayerDetailViewController : UITableViewController <STPicGameViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailedLable;
@property (nonatomic, weak) id<STPlayerDetailViewControllerDelegate> delegate;

-(IBAction)cancel:(id)sender;
-(IBAction)done:(id)sender;

@end
