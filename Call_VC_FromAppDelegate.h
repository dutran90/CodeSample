//
//  Call_VC_FromAppDelegate.h
//  LottoFY
//
//  Created by Alex Tran on 7/31/15.
//  Copyright (c) 2015 TruongBKDN. All rights reserved.
//

#ifndef LottoFY_Call_VC_FromAppDelegate_h
#define LottoFY_Call_VC_FromAppDelegate_h


NewVC *vcNew = [[NewVC alloc] initWithNibName:@"NewVC" bundle:nil];
UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vcNew];
[self.window setRootViewController:nav];
[nav setNavigationBarHidden:YES];



#endif
