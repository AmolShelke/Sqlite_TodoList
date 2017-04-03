//
//  taskViewController.h
//  Day24_sqlite_todolist
//
//  Created by Student P_04 on 03/04/17.
//  Copyright © 2017 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Databaselib.h"
@interface taskViewController : UIViewController
- (IBAction)saveButton:(id)sender;
- (IBAction)cancelButton:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *taskIdtext;
@property (weak, nonatomic) IBOutlet UITextField *taskNameText;

//@property (weak, nonatomic) IBOutlet UIBarButtonItem *saveButton;
//@property (weak, nonatomic) IBOutlet UIBarButtonItem *cancelButton;

@end
