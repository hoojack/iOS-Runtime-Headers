/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBBackup : NSObject <NSCoding, NSCopying> {
    NSString * _backupUDID;
    NSString * _backupUUID;
    NSString * _deviceClass;
    NSString * _hardwareModel;
    BOOL  _hasBackupEnabledState;
    BOOL  _isBackupEnabled;
    BOOL  _isMBSBackup;
    NSString * _marketingName;
    NSString * _productType;
    BOOL  _restoreSystemFiles;
    NSArray * _snapshots;
}

@property (nonatomic, readonly) NSString *backupUDID;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) NSString *backupUUIDSansPrefix;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *hardwareModel;
@property (nonatomic, readonly) BOOL hasBackupEnabledState;
@property (nonatomic, readonly) BOOL isBackupEnabled;
@property (nonatomic, readonly) BOOL isMBSBackup;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSString *productType;
@property (getter=canRestoreSystemFiles, nonatomic, readonly) BOOL restoreSystemFiles;
@property (nonatomic, readonly) NSArray *snapshots;

- (id)backupUDID;
- (id)backupUUID;
- (id)backupUUIDSansPrefix;
- (BOOL)canRestoreSystemFiles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareModel;
- (BOOL)hasBackupEnabledState;
- (id)initWithBackupUDID:(id)arg1 backupUUID:(id)arg2 deviceClass:(id)arg3 productType:(id)arg4 hardwareModel:(id)arg5 marketingName:(id)arg6 snapshots:(id)arg7 restoreSystemFiles:(BOOL)arg8 isMBSBackup:(BOOL)arg9 isBackupEnabled:(BOOL)arg10 hasBackupEnabledState:(BOOL)arg11;
- (id)initWithCoder:(id)arg1;
- (BOOL)isBackupEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMBSBackup;
- (id)marketingName;
- (id)productType;
- (id)snapshots;

@end
