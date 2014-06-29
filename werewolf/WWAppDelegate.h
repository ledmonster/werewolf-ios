//
//  WWAppDelegate.h
//  werewolf
//
//  Created by Junya Hayashi on 2014/06/29.
//  Copyright (c) 2014年 Junya Hayashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
