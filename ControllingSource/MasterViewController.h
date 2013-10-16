//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Leo Eskin on 10/15/13.
//  Copyright (c) 2013 Leo Eskin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
