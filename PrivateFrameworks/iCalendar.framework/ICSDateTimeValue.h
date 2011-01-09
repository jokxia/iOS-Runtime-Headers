/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */



@interface ICSDateTimeValue : ICSDateValue <NSCoding>
{
    NSInteger _hour;
    NSInteger _minute;
    NSInteger _second;
}

@property(readonly) NSInteger second;
@property(readonly) NSInteger minute;
@property(readonly) NSInteger hour;


- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (NSInteger)dateType;
- (NSInteger)minute;
- (NSInteger)second;
- (NSInteger)hour;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)components;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3 hour:(NSInteger)arg4 minute:(NSInteger)arg5 second:(NSInteger)arg6;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3;

@end