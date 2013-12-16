//
//  ViewController.h
//  TableViewDelete
//
//  Created by Roger on 2013/12/16.
//  Copyright (c) 2013年 Roger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITableViewDataSource,UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tbList;

@end
