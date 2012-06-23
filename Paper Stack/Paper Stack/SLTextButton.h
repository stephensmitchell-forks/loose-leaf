//
//  SLTextButton.h
//  Paper Stack
//
//  Created by Adam Wulf on 6/21/12.
//  Copyright (c) 2012 Visere. All rights reserved.
//

#import "SLSidebarButton.h"
#import <CoreText/CoreText.h>

@interface SLTextButton : SLSidebarButton{
    NSString* fontName;
    NSString* letter;
    CGFloat pointSize;
    CTFontSymbolicTraits traits;
    CGFloat xOffset;
}

- (id)initWithFrame:(CGRect)_frame andFont:(UIFont*)_font andLetter:(NSString*)_letter andTraits:(CTFontSymbolicTraits)_traits andXOffset:(CGFloat)_xOffset;

@end
