//
//  CustomUI.h
//  CustomUI
//
//  Created by JJ on 11/5/14.
//  Copyright (c) 2014 appsharenow. All rights reserved.
//  Visit me at: www.appsharenow.com
//  Contact me at: support@appsharenow.com
//

#import <UIKit/UIKit.h>

@interface CustomUI : UIView

+(id)sharedManager;

/*
 * Custom Views
 */

-(UIView *)customColorBackgroundView :(float)positionX :(float)positionY :(float)viewWidth :(float)viewHeight :(float)cornerRadius :(UIColor *)customBorderColor :(UIColor *)customBackgroundColor;

/*
 * Custom Labels
 */

-(UILabel *)customLabel :(float)positionX :(float)positionY :(float)labelWidth :(float)labelHeight :(UIColor *)textColor :(NSString *)textFont :(float)textSize;

/*
 * Custom Buttons
 */

-(UIButton *)customColorBtn :(float)positionX :(float)positionY :(float) btnWidth :(float)btnHeight :(UIColor *)titleColor :(UIColor *)btnColor : (UIColor *)borderColor :(float)borderWidth;

/*
 * Custom Loading indicator
 */

-(UIActivityIndicatorView *)customLoadingIndicator :(float)positionX :(float)positionY :(float)indicatorWidth :(float)indicatorHeight :(UIColor *)indicatorColor;


/*
 * Use this method to draw a simple line
 * Setting isVertical to be true, will draw a vertical line
 * Setting isVertical to be false, will draw a horizontal line
 * Allows user to set the length and color of the line
 */
-(UIButton *)customLine :(float)positionX :(float)positionY :(BOOL)isVertical :(int)lineLength :(UIColor *)lineColor;

/*
 * Use this method to draw a simple circle
 * Use the radius to set the size of the circle
 * circleColor, sets the background color of the circle
 * circleTitle, sets the value that display inside the circle. It can be empty
 * circleTitleColor, sets the color of the value that display inside the circle.
 * circleTitleSize, sets the size of the value that display inside the circle. If there is no value display inside the circle set circleTitleSize to be 0
 */
-(UIButton *)customCircle :(float)positionX :(float)positionY :(int)radius :(UIColor *)circleColor :(NSString *)circleTitle :(UIColor *)circleTitleColor :(float)circleTitleSize;

@end
