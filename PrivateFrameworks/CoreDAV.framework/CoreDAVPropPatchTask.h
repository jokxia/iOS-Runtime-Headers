/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, CoreDAVResponseItem;



@interface CoreDAVPropPatchTask : CoreDAVTask 
{
    NSSet *_propPatchRemoveElements;
    NSSet *_propPatchSetElements;
    CoreDAVResponseItem *_responseItem;
}

@property(retain) CoreDAVResponseItem *responseItem;
@property(retain) NSSet *propPatchSetElements;
@property(retain) NSSet *propPatchRemoveElements;
@property <CoreDAVPropPatchTaskDelegate> *delegate;


- (id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3;
- (id)responseItem;
- (void)setResponseItem:(id)arg1;
- (id)propPatchSetElements;
- (void)setPropPatchSetElements:(id)arg1;
- (id)propPatchRemoveElements;
- (void)setPropPatchRemoveElements:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;

@end