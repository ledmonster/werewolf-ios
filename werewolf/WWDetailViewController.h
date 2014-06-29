//
//  WWDetailViewController.h
//  werewolf
//
//  Created by Junya Hayashi on 2014/06/29.
//  Copyright (c) 2014年 Junya Hayashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
