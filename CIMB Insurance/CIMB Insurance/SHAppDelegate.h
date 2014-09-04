//
//  SHAppDelegate.h
//  CIMB Insurance
//
//  Created by Shan Markus on 9/4/14.
//  Copyright (c) 2014 Vayas World. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SHAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
