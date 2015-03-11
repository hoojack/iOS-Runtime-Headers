/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLXPCListenerOperatorComposition;

@interface PLHealthKitAgent : PLAgent {
    PLXPCListenerOperatorComposition *_queryHandler;
}

@property(retain) PLXPCListenerOperatorComposition * queryHandler;

+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (id)queryHandler;
- (void)setQueryHandler:(id)arg1;

@end