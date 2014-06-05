//
//  STPlayerDetailViewController.m
//  ST
//
//  Created by PanKyle on 14-6-2.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import "STPlayerDetailViewController.h"

@interface STPlayerDetailViewController ()

@end

@implementation STPlayerDetailViewController
{
    NSString * _game;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder]) {
        NSLog(@"init PlayerDetailViewController");
        _game = @"Chess";
    }
    return self;
}

- (void)dealloc
{
    NSLog(@"dealloc PlayerDetailViewController");
}

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.detailedLable.text = _game;
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)pickGameViewController:(STPickGameViewController *)controller didSelectGame:(NSString *)game
{
    _game = game;
    self.detailedLable.text = _game;
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (0 == indexPath.section) {
        [self.nameTextField becomeFirstResponder];
    }
}


#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([segue.identifier isEqualToString:@"PickGame"]) {
        STPickGameViewController * pg = segue.destinationViewController;
        pg.delegate = self;
        pg.game = _game;
    }
}


-(IBAction)cancel:(id)sender
{
    [self.delegate playerDetailViewControllerDidCancel:self];
}

-(IBAction)done:(id)sender
{
    STPlayer * player = [[STPlayer alloc] init];
    player.name = self.nameTextField.text;
    player.game = _game;
    player.rating = 1;
    [self.delegate playerDetailViewController:self didAddPlayer:player];
}


@end
