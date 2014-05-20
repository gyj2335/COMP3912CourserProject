//
//  DetailViewController.h
//  comp3912project
//
//  Created by Chang Song on 2014-05-19.
//  Copyright (c) 2014 ___Yanjing_Gao___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface DetailViewController : UIViewController <NSFetchedResultsControllerDelegate,UIImagePickerControllerDelegate,
UINavigationControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property BOOL newMedia;
- (IBAction)useCamera:(id)sender;
- (IBAction)useCameraRoll:(id)sender;
@end
