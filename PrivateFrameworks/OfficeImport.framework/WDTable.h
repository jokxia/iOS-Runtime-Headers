/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableProperties;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)addRow;
- (int)blockType;
- (id)cellIterator;
- (void)clearProperties;
- (void)clearRows;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (int)nestingLevel;
- (id)newCellIterator;
- (id)newRowIterator;
- (id)newRunIterator;
- (id)properties;
- (id)rowAt:(int)arg1;
- (int)rowCount;
- (id)rowIterator;
- (id)runIterator;

@end
