//
//  CreateGoalViewController.h
//  RunnersCompass
//
//  Created by Geoff MacDonald on 2013-02-17.
//  Copyright (c) 2013 Geoff MacDonald. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChartCell.h"
#import "RuleCell.h"
#import "PredictHeaderCell.h"
#import "Analysis.h"
#import "UserPrefs.h"

@interface PredictorVC: UITableViewController<UITableViewDataSource,UITableViewDelegate,ChartCellDelegate,RuleCellDelegate>
{
    RuleCell * ruleCell;
    NSMutableArray * cells;
}

@property PredictHeaderCell * header;
@property  UserPrefs * prefs;
@property Analysis * analysis;
@property  BOOL weekly;


@property (weak)  IBOutlet UITableView *table;

- (IBAction)doneTapped:(id)sender;
- (IBAction)weeklyTapped:(id)sender;
- (IBAction)monthlyTapped:(id)sender;

@end
