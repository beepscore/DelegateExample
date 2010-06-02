//
//  DelegateExampleAppDelegate.m
//  DelegateExample
//
//  Created by Steve Baker on 3/26/10.
//  Copyright 2010 Beepscore LLC. All rights reserved.
//

#import "DelegateExampleAppDelegate.h"
#import "Barney.h"

@implementation DelegateExampleAppDelegate

#pragma mark properties
@synthesize window;
@synthesize myLabel;
@synthesize barney;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	// Insert code here to initialize your application 
}


- (void)dealloc {
    [window release], window = nil;
    [myLabel release], myLabel = nil;
    
    [barney release], barney = nil;
    
    [super dealloc];
}


- (IBAction)handleStartButton:(id)sender {
    // ask fred for a string to put in myLabel
    
    // Here the program flow is convoluted and a bit contrived.
    // DelegateExampleAppDelegate uses its reference to barney to get to fred (i.e. self.barney.fred)
    // DelegateExampleAppDelegate calls fred's stringForButtonPressed method.
    // then fred will tell his delegate, barney, to supply the string    
    // probably could rework this into a more clear example!
    
    [self.myLabel setStringValue:[self.barney.fred stringForButtonPressed]];
}

@end
