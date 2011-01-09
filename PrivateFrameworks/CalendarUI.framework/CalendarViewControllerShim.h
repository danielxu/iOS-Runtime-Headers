/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarModel;



@interface CalendarViewControllerShim : UIViewController 
{
    CalendarModel *_model;
    NSInteger _viewType;
}


- (id)initWithCalendarViewType:(NSInteger)arg1;
- (void)dealloc;
- (id)calendarView;
- (void)setModel:(id)arg1;
- (NSInteger)calendarViewType;
- (id)title;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)resignModel;
- (void)viewWillDisappear:(BOOL)arg1;

@end