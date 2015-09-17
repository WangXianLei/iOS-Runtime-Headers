/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewItemController : NSObject <UIInteractionProgressObserver, UIPreviewInteractionControllerDelegate> {
    BOOL _contentManagedByClient;
    <UIPreviewItemDelegate> *_delegate;
    BOOL _interactionInProgress;
    double _lastPreviewIndicatorAnimationTimestamp;
    MLULookupItem *_lookupItem;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    NSDictionary *_previewData;
    float _previewIndicatorAnimationTargetAlpha;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _previewIndicatorBoundingRect;
    CADisplayLink *_previewIndicatorDisplayLink;
    UIImageView *_previewIndicatorImageView;
    UIView *_previewIndicatorSnapshotView;
    BOOL _previewIndicatorUsesStandardAnimation;
    UIView *_previewIndicatorView;
    UIPreviewInteractionController *_previewInteractionController;
    UIPreviewItemController *_strongSelf;
    int _type;
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPreviewItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL interactionInProgress;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) NSDictionary *previewData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (BOOL)_shouldCancelPreviewWithNegativeFeedback;
- (void)clearPreviewIndicator;
- (void)dealloc;
- (id)delegate;
- (id)gestureRecognizers;
- (id)init;
- (id)initWithView:(id)arg1;
- (BOOL)interactionInProgress;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(BOOL)arg2;
- (id)presentationGestureRecognizer;
- (id)presentationSecondaryGestureRecognizer;
- (id)presentedViewController;
- (id)presentingViewController;
- (id)previewData;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (void)previewInteractionController:(id)arg1 performCommitToViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(id)arg4;
- (id)previewViewControllerForPosition:(struct CGPoint { float x1; float x2; })arg1 inSourceView:(id)arg2 documentProperties:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setupPreviewIndicatorInSourceView:(id)arg1;
- (void)startInteraction;
- (void)stopInteraction;
- (int)type;
- (void)updatePreviewIndicatorAnimation:(id)arg1;
- (id)view;

@end