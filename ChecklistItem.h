//
//  ChecklistItem.h
//  Checklists
//
//  Created by Seebast4ever on 8/21/14.
//  Copyright (c) 2014 Sebastian Iturregui-Shelton. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

- (void)toggleChecked;

@end
