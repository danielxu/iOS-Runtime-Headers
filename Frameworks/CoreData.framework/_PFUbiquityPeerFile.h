/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSURL, NSString;

@interface _PFUbiquityPeerFile : NSObject <NSCoding> {
    NSString *_bundleID;
    NSURL *_peerFilePath;
    NSString *_peerID;
    NSURL *_storeMetadataURL;
}

@property(readonly) NSString * bundleID;
@property(readonly) NSURL * peerFilePath;
@property(readonly) NSString * peerID;
@property(readonly) NSURL * storeMetadataURL;

+ (id)cacheLocationForPeerID:(id)arg1 andBundleIdentifier:(id)arg2;
+ (id)localPeerFileForBundleID:(id)arg1;
+ (id)localPeerKey;
+ (id)machineUUID;
+ (id)peerBundleIdentifier;
+ (id)peerFileURLForPeerID:(id)arg1 withBundleID:(id)arg2;
+ (id)peerForPeerID:(id)arg1 withBundleID:(id)arg2;
+ (void)removePeerFilesForPeerID:(id)arg1 andBundleID:(id)arg2;
+ (void)storePeer:(id)arg1;

- (id)bundleID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerID:(id)arg1 andFileURL:(id)arg2 forBundleID:(id)arg3;
- (id)peerFilePath;
- (id)peerID;
- (id)storeMetadataURL;

@end