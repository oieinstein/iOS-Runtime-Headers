/* Generated by RuntimeBrowser.
 */

@protocol CUIKSingleDayTimelineViewItem <NSObject>

@required

+ (float)barToBarHorizontalDistanceIncludingBarWidth;

- (NSDate *)end;
- (float)enoughHeightForOneLine;
- (EKEvent *)event;
- (BOOL)hideTravelTime;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTravelTimeHeight:(float)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setVisibleHeight:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })stagedFrame;
- (NSDate *)start;
- (NSDate *)startWithTravelTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unPinnedViewFrame;
- (float)viewMaxNaturalTextHeight;
- (BOOL)visibleHeightLocked;

@end
