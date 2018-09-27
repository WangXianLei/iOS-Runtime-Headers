/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamingStatus : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    unsigned long long  _streamingStatus;
}

@property (nonatomic, readonly) unsigned long long streamingStatus;

+ (bool)supportsSecureCoding;

- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)streamingStatus;
- (id)tlvData;

@end