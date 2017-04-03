//
//  Databaselib.h
//  Day24_sqlite_todolist
//
//  Created by Student P_04 on 03/04/17.
//  Copyright © 2017 Felix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"
@interface Databaselib : NSObject
{
    sqlite3 *taskDatabase;
}
+(instancetype)getSharedObj;
-(NSString *)getDatabasePath;
-(void)createDatabase;
-(int)executeQuery:(NSString *)query;
-(NSArray *)getAllTasks:(NSString *)query;
//@property NSArray *taskarray;
@end
