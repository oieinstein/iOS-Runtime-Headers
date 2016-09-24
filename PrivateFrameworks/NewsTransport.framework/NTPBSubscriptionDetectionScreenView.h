/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {
    int  _countOfSubscriptionsDetected;
    struct { 
        unsigned int countOfSubscriptionsDetected : 1; 
    }  _has;
}

@property (nonatomic) int countOfSubscriptionsDetected;
@property (nonatomic) BOOL hasCountOfSubscriptionsDetected;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfSubscriptionsDetected;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCountOfSubscriptionsDetected;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCountOfSubscriptionsDetected:(int)arg1;
- (void)setHasCountOfSubscriptionsDetected:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end