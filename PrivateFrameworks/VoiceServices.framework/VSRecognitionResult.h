/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResult : NSObject  {
}

+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;
+ (void)initialize;

- (int)elementCount;
- (id)modelIdentifier;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;
- (id)createHandler;
- (void)setRecognitionAction:(id)arg1;
- (id)recognitionAction;
- (BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)description;
- (id)retain;
- (id)init;
- (oneway void)release;

@end