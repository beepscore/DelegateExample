//
//  DelegateExampleAppDelegate.h
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Barney;

@interface DelegateExampleAppDelegate : NSObject <NSApplicationDelegate> {
#pragma mark instance variables
    NSWindow *window;
    NSTextField *myLabel;
    Barney *barney;
}

#pragma mark properties
@property (assign)IBOutlet NSWindow *window;
@property(nonatomic,retain)IBOutlet NSTextField *myLabel;

// barney is instantiated in .xib, which will autorelease it.  We need to retain it.
@property(nonatomic,retain)IBOutlet Barney *barney;

- (IBAction)handleGoButton:(id)sender;

@end
