//
//  BFProductTableViewCell.h
//  bttf
//
//  Created by Admin on 2/11/15.
//  Copyright (c) 2015 bttf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFProductTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *productLabel;
@property (weak, nonatomic) IBOutlet UILabel *supplierLabel;
@property (weak, nonatomic) IBOutlet UILabel *quantityLabel;

@end
