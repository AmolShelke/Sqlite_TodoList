//
//  taskViewController.m
//  Day24_sqlite_todolist
//
//  Created by Student P_04 on 03/04/17.
//  Copyright © 2017 Felix. All rights reserved.
//

#import "taskViewController.h"

@interface taskViewController ()

@end

@implementation taskViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)saveButton:(id)sender {
    NSString *idText,*nameText;
    idText=self.taskIdtext.text;
    nameText=self.taskNameText.text;
    NSString *query=[NSString stringWithFormat:@"insert into taskTable(taskId,taskName)values(task1,taskName)"];
    int isSuccess=[[Databaselib getSharedObj]executeQuery:query];
    if(isSuccess)
    {
        NSLog(@"inserted:success");
    }
    else
    {
        NSLog(@"inserted:Failed");
    }
}

- (IBAction)cancelButton:(id)sender {
}
@end
