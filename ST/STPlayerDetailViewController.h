//
//  STPlayerDetailViewController.h
//  ST
//
//  Created by PanKyle on 14-6-2.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STPlayerDetailViewController;

@protocol STPlayerDetailViewControllerDelegate <NSObject>
- (void)playerDetailViewControllerDidCancel:(STPlayerDetailViewController *)controller;
- (void)playerDetailViewControllerDidSave:(STPlayerDetailViewController *)controller;
@end

@interface STPlayerDetailViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailedLable;
@property (nonatomic, weak) id<STPlayerDetailViewControllerDelegate> delegate;

-(IBAction)cancel:(id)sender;
-(IBAction)done:(id)sender;

@end
