/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSTheme, TSUColor;

@interface TSSThemeReplaceColorPresetCommand : TSKCommand {
    TSUColor *mColor;
    unsigned int mIndex;
    TSUColor *mOldColor;
    TSSTheme *mTheme;
}

@property(readonly) TSUColor * color;
@property(readonly) TSUColor * oldColor;
@property(readonly) TSSTheme * theme;

- (id)color;
- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTheme:(id)arg1 color:(id)arg2 index:(unsigned int)arg3 context:(id)arg4;
- (id)oldColor;
- (void)p_installColorPreset:(id)arg1;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (id)theme;
- (void)undo;

@end