/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class CMessageWrap, MassSendWrap, NSMutableDictionary, NSString;

@interface CdnTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    CMessageWrap *m_wrapMsg;
    MassSendWrap *m_massWrapMsg;
    NSString *m_nsChatName;
    unsigned int m_uiThumbSize;
    _Bool m_bHD;
    unsigned int m_uiFinishedLen;
    unsigned int m_uiTotalLen;
    unsigned long long m_ui64StartTime;
    int m_nRetCode;
    _Bool m_bUpload;
    _Bool m_bThumb;
    NSString *m_nsCdnStatInfo;
    unsigned int m_uiOpType;
    NSString *m_nsMd5;
    NSString *m_nsShareOriginUrl;
    NSString *m_nsShareOpenUrl;
    NSString *m_nsJsAppId;
    NSMutableDictionary *m_dicStatParas;
}

+ (unsigned int)GetStatNetworkType;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @synthesize m_dicStatParas;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @synthesize m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @synthesize m_nsShareOriginUrl;
@property(retain, nonatomic) NSString *m_nsMd5; // @synthesize m_nsMd5;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType;
@property(retain, nonatomic) NSString *m_nsCdnStatInfo; // @synthesize m_nsCdnStatInfo;
@property(nonatomic) _Bool m_bThumb; // @synthesize m_bThumb;
@property(nonatomic) _Bool m_bUpload; // @synthesize m_bUpload;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) unsigned int m_uiFinishedLen; // @synthesize m_uiFinishedLen;
@property(nonatomic) _Bool m_bHD; // @synthesize m_bHD;
@property(nonatomic) unsigned int m_uiThumbSize; // @synthesize m_uiThumbSize;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) MassSendWrap *m_massWrapMsg; // @synthesize m_massWrapMsg;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
//- (void).cxx_destruct;
- (id)GetStatInfo;
- (id)init;

@end
