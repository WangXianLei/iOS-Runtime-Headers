/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSNullFileHandle : NSFileHandle 
{
}


- (void)seekToFileOffset:(unsigned long long)arg1;
- (id)readDataOfLength:(NSUInteger)arg1;
- (unsigned long long)seekToEndOfFile;
- (id)readDataToEndOfFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (NSInteger)fileDescriptor;
- (id)availableData;
- (unsigned long long)offsetInFile;
- (void)synchronizeFile;
- (void)writeData:(id)arg1;
- (void)closeFile;

@end