//
//  ViewController.h
//  FancyTextCreator
//
//  Created by Sergio Santos on 20/02/2022.
//  Copyright © 2022 Sergio Santos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    CGFloat fontSize;
    BOOL state;
    
}

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIButton *shadowButton;


- (IBAction)dismissKeyboard:(id)sender;
- (IBAction)red:(id)sender;
- (IBAction)blue:(id)sender;
- (IBAction)green:(id)sender;
- (IBAction)font1:(id)sender;
- (IBAction)font2:(id)sender;
- (IBAction)font3:(id)sender;
- (IBAction)font4:(id)sender;
- (IBAction)shadow:(id)sender;
- (IBAction)small:(id)sender;
- (IBAction)medium:(id)sender;
- (IBAction)large:(id)sender;








@end

