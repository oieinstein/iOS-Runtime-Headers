/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUILandscapeTransition : NSObject <UIViewControllerTransitioningDelegate> {
    BOOL  _isVisible;
    UIViewController * _presentedViewController;
    BOOL  _shouldRetainViewHierarchy;
    <UIViewControllerAnimatedTransitioning> * _transitionAnimator;
    UIViewController<HKUILandscapeTransitioningViewController> * _transitioningViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldRetainViewHierarchy;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIViewControllerAnimatedTransitioning> *transitionAnimator;
@property (nonatomic, readonly) UIViewController<HKUILandscapeTransitioningViewController> *transitioningViewController;

- (void).cxx_destruct;
- (BOOL)_isPresentingViewController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)initWithTransitioningViewController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (void)setShouldRetainViewHierarchy:(BOOL)arg1;
- (void)setTransitionAnimator:(id)arg1;
- (BOOL)shouldRetainViewHierarchy;
- (id)transitionAnimator;
- (id)transitioningViewController;
- (void)viewDidAppear;
- (void)viewWillDisappear;

@end