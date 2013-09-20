/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface SBCXPCServiceProxy : NSObject {
    NSDictionary *_clientConfiguration;
    BOOL _isConnecting;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSObject<OS_dispatch_queue> *_queue;
    Class _serviceInterfaceClass;
    id _serviceProxy;
    NSXPCConnection *_xpcConnection;
}

@property(readonly) NSDictionary * clientConfiguration;
@property(readonly) BOOL isConnecting;
@property(readonly) NSMutableDictionary * pendingServiceCompletionHandlers;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) Class serviceInterfaceClass;
@property(readonly) id serviceProxy;
@property(readonly) NSXPCConnection * xpcConnection;

- (void).cxx_destruct;
- (void)_dequeueRequestWithEnqueuedToken:(id)arg1;
- (id)_enqueueMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2;
- (void)_invalidateOutstandingRequests:(id)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidateOutstandingRequests:(id)arg1;
- (void)_openServiceConnection;
- (id)clientConfiguration;
- (void)closeServiceConnection;
- (void)dealloc;
- (void)didConnectToServiceProxy;
- (id)initWithServiceInterfaceClass:(Class)arg1 clientConfiguration:(id)arg2;
- (BOOL)isConnecting;
- (id)pendingServiceCompletionHandlers;
- (id)queue;
- (void)sendMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2 messageBlock:(id)arg3;
- (Class)serviceInterfaceClass;
- (id)serviceProxy;
- (oneway void)setClientConfiguration:(id)arg1;
- (id)xpcConnection;

@end