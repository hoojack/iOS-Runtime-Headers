/* Generated by RuntimeBrowser.
 */

@protocol MKSearchCompleterDelegate <NSObject>

@optional

- (void)completerDidAccessNetwork:(MKSearchCompleter *)arg1;
- (void)completerDidFail:(MKSearchCompleter *)arg1 error:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKSearchCompleter *)arg1 finished:(BOOL)arg2;
- (void)completerWillAccessNetwork:(MKSearchCompleter *)arg1;
- (void)completerWillUpdateResults:(MKSearchCompleter *)arg1;

@end