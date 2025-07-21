#import <UIKit/UIKit.h>

@interface UIKeyboardDockItemButton : UIButton
@end

@interface UIKeyboardDockItem : NSObject
@property (nonatomic, strong, readwrite) NSString *identifier;
@property (nonatomic, strong, readwrite) UIKeyboardDockItemButton *button;
@end

@interface UIKeyboardDockView : UIView
@property (nonatomic, strong, readwrite) UIKeyboardDockItem *leftDockItem;
@end
