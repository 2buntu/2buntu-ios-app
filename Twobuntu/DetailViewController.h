//
//  DetailViewController.h
//  Twobuntu
//
//  Created by Nathan Osman on 2015-02-08.
//  Copyright (c) 2015 2buntu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

