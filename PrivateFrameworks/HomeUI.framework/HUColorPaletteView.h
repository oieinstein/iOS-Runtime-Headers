/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColorPaletteView : UIView <HUQuickControlInteractiveView, UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer * _changePresetRecognizer;
    float  _circleRadius;
    HFColorPalette * _colorPalette;
    BOOL  _colorPaletteHasChanged;
    NSArray * _colorSwatchViews;
    UILongPressGestureRecognizer * _gestureRecognizer;
    <HUQuickControlColorPaletteViewInteractionDelegate> * _interactionDelegate;
    HUQuickControlViewProfile * _profile;
    HFColorPaletteColor * _selectedColor;
    NSNumber * _trackingColorIndex;
    BOOL  _userInteractionActive;
}

@property (nonatomic, retain) UILongPressGestureRecognizer *changePresetRecognizer;
@property (nonatomic) float circleRadius;
@property (nonatomic, retain) HFColorPalette *colorPalette;
@property (nonatomic) BOOL colorPaletteHasChanged;
@property (nonatomic, copy) NSArray *colorSwatchViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned int hash;
@property (nonatomic) <HUQuickControlColorPaletteViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, copy) HUQuickControlViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic, retain) HFColorPaletteColor *selectedColor;
@property (nonatomic) int sizeSubclass;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *trackingColorIndex;
@property (getter=isUserInteractionActive, nonatomic) BOOL userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_buildColorSwatchViews;
- (void)_handleGesture:(id)arg1;
- (void)_handleGestureForVeryLongPress:(id)arg1;
- (void)_setColorPalette:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)_setSelectedColor:(id)arg1 notifyDelegate:(BOOL)arg2 updateSelectionState:(BOOL)arg3;
- (id)_swatchIndexForGestureRecognizer:(id)arg1;
- (void)_updateColorSelectionAnimated:(BOOL)arg1;
- (void)_updateColorSwatchViewsWithAnimations:(BOOL)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)changePresetRecognizer;
- (float)circleRadius;
- (id)colorPalette;
- (BOOL)colorPaletteHasChanged;
- (id)colorSwatchViews;
- (id)gestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)interactionDelegate;
- (BOOL)isUserInteractionActive;
- (void)layoutSubviews;
- (id)profile;
- (float)radiusFittingSize:(struct CGSize { float x1; float x2; })arg1;
- (id)selectedColor;
- (void)setChangePresetRecognizer:(id)arg1;
- (void)setCircleRadius:(float)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setColorPaletteHasChanged:(BOOL)arg1;
- (void)setColorSwatchViews:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setTrackingColorIndex:(id)arg1;
- (void)setUserInteractionActive:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)trackingColorIndex;
- (id)value;

@end
