/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly) NSArray * events;

- (id)_errorLogArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;
- (void)finalize;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end
