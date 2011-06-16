//
//  FirstViewController.h
//  HalfADeal
//
//  Created by Andrew Rauh on 6/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CitySelectionTableView;

@interface FirstViewController : UIViewController {
    IBOutlet CitySelectionTableView *citySelectionTableView;
    IBOutlet UINavigationController *navigationController; 

}

@property (nonatomic, retain) CitySelectionTableView *citySelectionTableView;
@property (nonatomic, retain) UINavigationController *navigationController;

-(IBAction)navButtonToGoToCities:(id)sender;
@end
