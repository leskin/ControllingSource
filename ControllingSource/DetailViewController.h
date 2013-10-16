//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Leo Eskin on 10/15/13.
//  Copyright (c) 2013 Leo Eskin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
