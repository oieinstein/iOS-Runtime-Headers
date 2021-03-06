/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoveEvent : UIEvent {
    unsigned int  _focusHeading;
    int  _moveDirection;
}

@property (setter=_setFocusHeading:, nonatomic) unsigned int _focusHeading;
@property (setter=_setMoveDirection:, nonatomic) int _moveDirection;

- (unsigned int)_focusHeading;
- (int)_moveDirection;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setFocusHeading:(unsigned int)arg1;
- (void)_setMoveDirection:(int)arg1;
- (int)type;

@end
