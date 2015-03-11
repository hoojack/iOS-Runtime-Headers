/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class MPImageCache;

@interface MCDAlbumsDetailViewController : MCDTableViewController {
    MPImageCache *_imageCache;
    double _maximumDurationWidth;
}

@property(readonly) double maximumDurationWidth;

+ (id)actionCellConfigurationClasses;

- (void).cxx_destruct;
- (void)_updateTitle;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (double)maximumDurationWidth;
- (void)reloadData;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end