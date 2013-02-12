/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetTrack, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    BOOL _displaysNonForcedSubtitles;
    AVAssetTrack *_track;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)_ancillaryDescription;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (BOOL)displaysNonForcedSubtitles;
- (id)group;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (unsigned int)hash;
- (id)initWithAssetTrack:(id)arg1 group:(id)arg2 displaysNonForcedSubtitles:(BOOL)arg3;
- (id)initWithAssetTrack:(id)arg1 group:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlayable;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)propertyList;
- (id)track;
- (int)trackID;

@end