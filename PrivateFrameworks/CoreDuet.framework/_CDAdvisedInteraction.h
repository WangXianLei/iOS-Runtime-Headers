/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding> {
    NSString *_account;
    NSString *_bundleId;
    _CDContact *_contact;
    int _mechanism;
    NSMutableSet *_reasons;
    double _score;
    int _similarBidirectionalInteractionsCount;
    int _similarIncomingInteractionsCount;
    int _similarOutgoingInteractionsCount;
}

@property (retain) NSString *account;
@property (retain) NSString *bundleId;
@property (retain) _CDContact *contact;
@property int mechanism;
@property (retain) NSSet *reasons;
@property double score;
@property int similarBidirectionalInteractionsCount;
@property int similarIncomingInteractionsCount;
@property int similarOutgoingInteractionsCount;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (void)addReason:(int)arg1;
- (void)addReasons:(id)arg1;
- (id)bundleId;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionOfReasons:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)mechanism;
- (id)reasons;
- (double)score;
- (void)setAccount:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setMechanism:(int)arg1;
- (void)setReasons:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSimilarBidirectionalInteractionsCount:(int)arg1;
- (void)setSimilarIncomingInteractionsCount:(int)arg1;
- (void)setSimilarOutgoingInteractionsCount:(int)arg1;
- (int)similarBidirectionalInteractionsCount;
- (int)similarIncomingInteractionsCount;
- (int)similarOutgoingInteractionsCount;

@end