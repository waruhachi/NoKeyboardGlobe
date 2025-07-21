#import "NoKeyboardGlobe.h"

%hook UIKeyboardDockView
- (void)layoutSubviews {
	%orig;

	UIKeyboardDockItem *leftItem = self.leftDockItem;
	if (leftItem && [leftItem.identifier isEqualToString:@"globe"]) {
		UIKeyboardDockItemButton *globeButton = leftItem.button;
		if (globeButton) {
			globeButton.hidden = YES;
		}
	}
}
%end
