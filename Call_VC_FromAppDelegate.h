#AlexTran

NewVC *vcNew = [[NewVC alloc] initWithNibName:@"NewVC" bundle:nil];
UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vcNew];
[self.window setRootViewController:nav];
[nav setNavigationBarHidden:YES];

