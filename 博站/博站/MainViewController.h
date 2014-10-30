//
//  MainViewController.h
//  博站
//
//  Created by Carl on 29/10/14.
//  Copyright (c) 2014 dotoyo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *tableView;

//cells
@property (strong, nonatomic) IBOutlet UITableViewCell *usernameCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *passwordCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *doneCell;

//fields
@property (strong, nonatomic) IBOutlet UITextField *passwordField;
@property (strong, nonatomic) IBOutlet UITextField *usernameField;

- (IBAction)changeFieldBackground:(id)sender;
- (IBAction)letMeIn:(id)sender;
@end
