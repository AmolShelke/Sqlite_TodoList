//
//  ViewController.h
//  Day24_sqlite_todolist
//
//  Created by Student P_04 on 03/04/17.
//  Copyright © 2017 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Databaselib.h"
@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *myTableView;

- (IBAction)newToTask:(id)sender;
@property NSArray *myArray;

@end

