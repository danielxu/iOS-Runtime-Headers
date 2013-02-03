/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SMSCTServer.framework/SMSCTServer
 */

@class NSThread, NSMutableDictionary, CPDistributedMessagingCenter;

@interface SMSCTServer : NSObject {
    NSMutableDictionary *_associationForRecord;
    NSMutableDictionary *_associationSets;
    CPDistributedMessagingCenter *_messageCenter;
    NSThread *_messageThread;
}

+ (id)sharedServer;

- (void)_acknowledgeMessageWithKey:(NSInteger)arg1;
- (void)_addRecord:(NSInteger)arg1 forAssociationID:(NSInteger)arg2;
- (NSInteger)_associationIDForRecord:(NSInteger)arg1;
- (void)_checkAddressBook:(void*)arg1;
- (void)_checkAddressBookAfterQuiescence;
- (BOOL)_checkMMSEnablement;
- (void)_clearPendingIncomingMessageQueue;
- (void)_ingestIncomingCTMessage:(id)arg1;
- (void)_mobileSMSDidResume;
- (void)_processReceivedMessageWithInfo:(struct __CFDictionary { }*)arg1;
- (unsigned char)_readMMSUserOverride;
- (void)_reallySendSMSRequest:(struct __CFDictionary { }*)arg1 withProcessedParts:(struct __CFArray { }*)arg2 recordID:(NSUInteger)arg3;
- (void)_registerForCTNotifications;
- (void)_registerForClientCompositionNotifications;
- (void)_removeAssociationSetForRecord:(NSInteger)arg1;
- (BOOL)_removeRecordFromAssociations:(NSInteger)arg1;
- (id)_sendClientComposedMessage:(id)arg1 userInfo:(id)arg2;
- (void)_sendCompleted:(unsigned char)arg1 forRecord:(NSUInteger)arg2;
- (void)_significantTimeChanged;
- (void)_unregisterForClientCompositionNotifications;
- (void)dealloc;
- (void)playMessageSent;
- (void)start;
- (void)stop;
- (void)updateMMSCapability;

@end