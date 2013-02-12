/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryLoadEntitesOperation : ML3QueryLoadOperation {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _loadRange;
    BOOL _ordered;
}

@property _NSRange loadRange;
@property BOOL ordered;

- (void)dealloc;
- (id)initWithQuery:(id)arg1 loadRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 ordered:(BOOL)arg3;
- (id)initWithQuery:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })loadRange;
- (void)main;
- (BOOL)ordered;
- (void)setLoadRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setOrdered:(BOOL)arg1;

@end