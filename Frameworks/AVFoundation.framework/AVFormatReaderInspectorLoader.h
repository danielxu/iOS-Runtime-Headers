/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFormatReaderInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigFormatReaderLoader { } *_formatReaderLoader;
    BOOL _prefersAccurateTiming;
}

+ (id)formatReaderInspectorLoaderWithURL:(id)arg1 options:(id)arg2;

- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(NSInteger*)arg1;
- (id)_dictionaryOfSpecialTestsOfKeys;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (id)_formatReaderLoaderProductsForKeys:(id)arg1;
- (void)_loadDurationSynchronously;
- (void)_loadLyricsSynchronously;
- (BOOL)_loadValuesForKeys:(id)arg1;
- (id)_lyrics;
- (BOOL)_providesAccurateTiming;
- (void)_removeFormatReaderLoaderNotifications;
- (id)assetInspector;
- (void)cancelLoading;
- (void)dealloc;
- (void)finalize;
- (NSUInteger)hash;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end