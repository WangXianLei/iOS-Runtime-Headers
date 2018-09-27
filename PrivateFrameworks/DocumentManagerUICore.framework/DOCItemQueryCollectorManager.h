/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCItemQueryCollectorManager : NSObject {
    NSMapTable * _collectors;
}

@property (retain) NSMapTable *collectors;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (Class)_descriptorClassForEnumerationIdentifier:(id)arg1;
- (void)collection:(id)arg1 userSearchStringDidChange:(id)arg2;
- (id)collectorForEnumerationIdentifier:(id)arg1 properties:(id)arg2;
- (id)collectors;
- (void)enumerationWasResumed:(id)arg1;
- (id)init;
- (id)registerCollection:(id)arg1 withEnumerationProperties:(id)arg2;
- (void)setCollectors:(id)arg1;
- (void)unregisterCollection:(id)arg1;

@end