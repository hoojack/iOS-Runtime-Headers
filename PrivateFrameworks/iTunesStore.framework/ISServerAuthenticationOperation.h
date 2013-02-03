/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSNumber, ISDialog, ISAuthenticationContext;

@interface ISServerAuthenticationOperation : ISOperation {
    NSNumber *_authenticatedAccountDSID;
    ISAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    NSURL *_redirectURL;
}

@property(retain) NSNumber *authenticatedAccountDSID;
@property(retain) ISAuthenticationContext *authenticationContext;
@property(retain) ISDialog *dialog;
@property(retain) NSURL *redirectURL;

- (id)_authenticationContext;
- (BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2;
- (id)_copyButtonForDialogSkip;
- (BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2;
- (BOOL)_handleSelectedButton:(id)arg1;
- (BOOL)_shouldAuthenticateForButton:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)dealloc;
- (id)dialog;
- (id)redirectURL;
- (void)run;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setRedirectURL:(id)arg1;

@end