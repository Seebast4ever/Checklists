//
//  itemDetailViewController.h
//  Checklists
//
//  Created by Seebast4ever on 8/25/14.
//  Copyright (c) 2014 Sebastian Iturregui-Shelton. All rights reserved.
//

#import <UIKit/UIKit.h>

@class itemDetailViewController;
@class ChecklistItem;

@protocol itemDetailViewControllerDelegate <NSObject>

- (void)itemDetailViewControllerDidCancel:(itemDetailViewController *)controller;

- (void)itemDetailViewController:(itemDetailViewController *)controller didFinishAddingItem:(ChecklistItem *)item;

- (void)itemDetailViewController:(itemDetailViewController *)controller didFinishEditingItem:(ChecklistItem *)item;

@end

@interface itemDetailViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;

@property (nonatomic, weak) id <itemDetailViewControllerDelegate> delegate;
@property (nonatomic, strong) ChecklistItem *itemToEdit;

- (IBAction)cancel;
- (IBAction)done;

@end

