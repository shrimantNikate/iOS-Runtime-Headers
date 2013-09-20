/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AXReportSender : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_reportCache;
    BOOL _shouldAnnounce;
}

@property NSObject<OS_dispatch_queue> * dispatchQueue;
@property(retain) NSMutableArray * reportCache;
@property BOOL shouldAnnounce;

+ (id)sharedInstance;

- (void)_addCreatedDateToSimpleParameters:(id)arg1;
- (void)_addDeviceInfoToSimpleParamters:(id)arg1 overrideProcessName:(id)arg2;
- (void)_addOtherCommonToSimpleParameters:(id)arg1;
- (void)_announceAndLogMessage:(id)arg1;
- (id)_gatherDeviceInfo;
- (void)_sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2 asynchronously:(BOOL)arg3 timeoutInterval:(double)arg4;
- (void)_sendReport:(id)arg1 asynchronously:(BOOL)arg2 timeoutInterval:(double)arg3;
- (void)_sendReportWithAction:(id)arg1 route:(id)arg2 simpleParameters:(id)arg3 fileParameters:(id)arg4 forceSilent:(BOOL)arg5 asynchronously:(BOOL)arg6 timeoutInterval:(double)arg7;
- (void)_sendReportWithAction:(id)arg1 route:(id)arg2 simpleParameters:(id)arg3 fileParameters:(id)arg4 forceSilent:(BOOL)arg5;
- (void)_sendReportWithAction:(id)arg1 route:(id)arg2 simpleParameters:(id)arg3 fileParameters:(id)arg4;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)reportCache;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2;
- (void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendExceptionForSafeBlock:(id)arg1;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2;
- (void)sendFailedAssertionSynchronouslyWithErrorMessage:(id)arg1 timeoutInterval:(double)arg2 overrideProcessName:(id)arg3;
- (void)sendFailedAssertionSynchronouslyWithErrorMessage:(id)arg1 timeoutInterval:(double)arg2;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2;
- (void)sendScreenshot:(id)arg1 type:(id)arg2 description:(id)arg3;
- (void)sendStackshot:(id)arg1 description:(id)arg2;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setReportCache:(id)arg1;
- (void)setShouldAnnounce:(BOOL)arg1;
- (BOOL)shouldAnnounce;

@end