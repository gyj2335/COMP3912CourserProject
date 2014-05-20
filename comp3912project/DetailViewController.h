//
//  DetailViewController.h
//  comp3912project
//
//  Created by Chang Song on 2014-05-19.
//  Copyright (c) 2014 ___Yanjing_Gao___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
