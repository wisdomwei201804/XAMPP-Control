//
//  MySQLSecurityCheck.h
//  XAMPP Control
//
//  Created by Christian Speich on 26.04.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <SharedXAMPPSupport/AssistantPage.h>
#import <SharedXAMPPSupport/SecurityCheckProtocol.h>

@interface MySQLSecurityCheck : AssistantPage<SecurityCheckProtocol> {
	IBOutlet NSSecureTextField*	password;
	IBOutlet NSSecureTextField*	passwordConfirm;
	
	BOOL skipNetworking;
	BOOL setRootPassword;
	BOOL setPMAPassword;
	
	NSArray *localizedTaskTitles;
}

@end