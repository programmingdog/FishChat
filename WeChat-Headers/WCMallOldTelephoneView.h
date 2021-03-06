//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIButton, UIImageView, UITableView;

@interface WCMallOldTelephoneView : MMUIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *m_oTelFilterTableView;
    UIButton *clearBtn;
    UIImageView *bgImageView;
    id <WCMallOldTelephoneViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCMallOldTelephoneViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTelFilterTableView;
- (void)resetWCMallTelListTableViewHeight:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (void)initTableView;
- (void)initClearButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

