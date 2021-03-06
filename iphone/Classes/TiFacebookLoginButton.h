/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiBase.h"

#ifdef USE_TI_FACEBOOK

#import "TiUIView.h"
#import "FBConnect.h"

@interface TiFacebookLoginButton : TiUIView<FBSessionDelegate> {
@private
	FBLoginButton *button;
}

@end

#endif