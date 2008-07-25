//
//  MKErrorWindow.h
//  MKAbeFook
//
//  Created by Mike Kinney on 7/21/08.
/*
 Copyright (c) 2008, Mike Kinney
 All rights reserved.
 
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 
 Neither the name of MKAbeFook nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 */

#import <Cocoa/Cocoa.h>

/*!
 @brief Display simple error messages with option of providing more details
 
 @class MKErrorWindow
 MKErrorWindow is used to display error messages that may or may not contain additional information useful for debugging the error.
 
 
 */

@interface MKErrorWindow : NSWindowController {

	IBOutlet NSImageView *errorImage;
	IBOutlet NSTextField *errorTitle;
	IBOutlet NSTextField *errorMessage;
	IBOutlet NSTextView *errorDetails;
	
	IBOutlet NSButton *detailsButton;
	
	NSString *_errorTitle;
	NSString *_errorMessage;
	NSString *_errorDetails;
	
}
/*!
 @param title Error title (required)
 @param message Brief error message (required)
 @param details Extended details about the error, pass nill if you have no details to display. (optional)

 Create a new error window with appropriate title, error message, and additional details.
 
 @result Returns allocated and initiated MKErrorWindow that will automatically be released when closed (user clicks OK).
 @version 0.7.7 and later
 */
+(MKErrorWindow *)errorWindowWithTitle:(NSString *)title message:(NSString *)message details:(NSString *)details;

/*used internally*/
-(MKErrorWindow *)initWithTitle:(NSString *)title message:(NSString *)message details:(NSString *)details;

/*!
 
 Displays error window in the center of the screen.
 
 @version 0.7.7 and later
 */
-(void)display;
-(IBAction)okButton:(id)sender;
-(IBAction)detailsButton:(id)sender;

@end
