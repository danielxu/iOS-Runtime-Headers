/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;

@interface CKSMSEntity : CKEntity  {
    NSString *_cachedName;
    unsigned int _accepted : 1;
    unsigned int _generated : 1;
    struct __IMDSMSAddress { } *_smsAddress;
}

@property struct __IMDSMSAddress { }* smsAddress;

+ (id)copyAllSMSEntities;
+ (id)copyAllEntities;

- (int)propertyType;
- (int)identifier;
- (id)name;
- (struct __IMDSMSAddress { }*)_smsAddress;
- (void)setSmsAddress:(struct __IMDSMSAddress { }*)arg1;
- (id)_existingEntityFromSharedSet;
- (void)_addToSharedSet;
- (void)_removeFromSharedSet;
- (void)_generateName;
- (void)_generateCachedName;
- (struct __IMDSMSAddress { }*)smsAddress;
- (id)_initWithSMSAddress:(struct __IMDSMSAddress { }*)arg1 service:(id)arg2;
- (void)setABRecord:(void*)arg1 withIdentifier:(int)arg2;
- (int)addressBookUID;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (void*)abRecord;
- (id)rawAddress;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (void)resetCaches;

@end