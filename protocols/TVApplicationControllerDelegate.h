/* Generated by RuntimeBrowser.
 */

@protocol TVApplicationControllerDelegate <NSObject>

@optional

- (void)appController:(TVApplicationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;

@end
