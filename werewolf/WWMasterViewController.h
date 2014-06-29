//
//  WWMasterViewController.h
//  werewolf
//
//  Created by Junya Hayashi on 2014/06/29.
//  Copyright (c) 2014年 Junya Hayashi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface WWMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
