// Objective-C API for talking to github.com/sagernet/sing-box/experimental/libbox Go package.
//   gobind -lang=objc github.com/sagernet/sing-box/experimental/libbox
//
// File is generated by gobind. Do not edit.

#ifndef __Libbox_H__
#define __Libbox_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class LibboxBoxService;
@class LibboxCommandClient;
@class LibboxCommandClientOptions;
@class LibboxCommandServer;
@class LibboxPProfServer;
@class LibboxRoutePrefix;
@class LibboxStatusMessage;
@protocol LibboxCommandClientHandler;
@class LibboxCommandClientHandler;
@protocol LibboxCommandServerHandler;
@class LibboxCommandServerHandler;
@protocol LibboxOnDemandRule;
@class LibboxOnDemandRule;
@protocol LibboxOnDemandRuleIterator;
@class LibboxOnDemandRuleIterator;
@protocol LibboxPlatformInterface;
@class LibboxPlatformInterface;
@protocol LibboxRoutePrefixIterator;
@class LibboxRoutePrefixIterator;
@protocol LibboxStandardOutput;
@class LibboxStandardOutput;
@protocol LibboxStringIterator;
@class LibboxStringIterator;
@protocol LibboxTunInterface;
@class LibboxTunInterface;
@protocol LibboxTunOptions;
@class LibboxTunOptions;

@protocol LibboxCommandClientHandler <NSObject>
- (void)connected;
- (void)disconnected:(NSString* _Nullable)message;
- (void)writeLog:(NSString* _Nullable)message;
- (void)writeStatus:(LibboxStatusMessage* _Nullable)message;
@end

@protocol LibboxCommandServerHandler <NSObject>
- (BOOL)serviceReload:(NSError* _Nullable* _Nullable)error;
- (BOOL)serviceStop:(NSError* _Nullable* _Nullable)error;
@end

@protocol LibboxOnDemandRule <NSObject>
- (id<LibboxStringIterator> _Nullable)dnsSearchDomainMatch;
- (id<LibboxStringIterator> _Nullable)dnsServerAddressMatch;
- (int32_t)interfaceTypeMatch;
- (NSString* _Nonnull)probeURL;
- (id<LibboxStringIterator> _Nullable)ssidMatch;
- (int32_t)target;
@end

@protocol LibboxOnDemandRuleIterator <NSObject>
- (BOOL)hasNext;
- (id<LibboxOnDemandRule> _Nullable)next;
@end

@protocol LibboxPlatformInterface <NSObject>
- (BOOL)autoDetectInterfaceControl:(int32_t)fd error:(NSError* _Nullable* _Nullable)error;
- (BOOL)findConnectionOwner:(int32_t)ipProtocol sourceAddress:(NSString* _Nullable)sourceAddress sourcePort:(int32_t)sourcePort destinationAddress:(NSString* _Nullable)destinationAddress destinationPort:(int32_t)destinationPort ret0_:(int32_t* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)openTun:(id<LibboxTunOptions> _Nullable)options ret0_:(int32_t* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)packageNameByUid:(int32_t)uid error:(NSError* _Nullable* _Nullable)error;
- (BOOL)uidByPackageName:(NSString* _Nullable)packageName ret0_:(int32_t* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)useProcFS;
- (void)writeLog:(NSString* _Nullable)message;
@end

@protocol LibboxRoutePrefixIterator <NSObject>
- (BOOL)hasNext;
- (LibboxRoutePrefix* _Nullable)next;
@end

@protocol LibboxStandardOutput <NSObject>
- (void)writeErrorOutput:(NSString* _Nullable)message;
- (void)writeOutput:(NSString* _Nullable)message;
@end

@protocol LibboxStringIterator <NSObject>
- (BOOL)hasNext;
- (NSString* _Nonnull)next;
@end

@protocol LibboxTunInterface <NSObject>
- (BOOL)close:(NSError* _Nullable* _Nullable)error;
- (int32_t)fileDescriptor;
@end

@protocol LibboxTunOptions <NSObject>
- (BOOL)getAutoRoute;
- (NSString* _Nonnull)getDNSServerAddress:(NSError* _Nullable* _Nullable)error;
- (id<LibboxStringIterator> _Nullable)getExcludePackage;
- (NSString* _Nonnull)getHTTPProxyServer;
- (int32_t)getHTTPProxyServerPort;
- (id<LibboxStringIterator> _Nullable)getIncludePackage;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet4Address;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet4RouteAddress;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet6Address;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet6RouteAddress;
- (int32_t)getMTU;
- (BOOL)getStrictRoute;
- (BOOL)isHTTPProxyEnabled;
@end

@interface LibboxBoxService : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (BOOL)close:(NSError* _Nullable* _Nullable)error;
- (BOOL)start:(NSError* _Nullable* _Nullable)error;
@end

@interface LibboxCommandClient : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)sharedDirectory handler:(id<LibboxCommandClientHandler> _Nullable)handler options:(LibboxCommandClientOptions* _Nullable)options;
- (BOOL)connect:(NSError* _Nullable* _Nullable)error;
- (BOOL)disconnect:(NSError* _Nullable* _Nullable)error;
@end

@interface LibboxCommandClientOptions : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) int32_t command;
@property (nonatomic) int64_t statusInterval;
@end

@interface LibboxCommandServer : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(NSString* _Nullable)sharedDirectory handler:(id<LibboxCommandServerHandler> _Nullable)handler;
- (BOOL)close:(NSError* _Nullable* _Nullable)error;
- (BOOL)start:(NSError* _Nullable* _Nullable)error;
- (void)writeMessage:(NSString* _Nullable)message;
@end

@interface LibboxPProfServer : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(long)port;
- (BOOL)close:(NSError* _Nullable* _Nullable)error;
- (BOOL)start:(NSError* _Nullable* _Nullable)error;
@end

@interface LibboxRoutePrefix : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull address;
@property (nonatomic) int32_t prefix;
- (NSString* _Nonnull)mask;
@end

@interface LibboxStatusMessage : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) int64_t memory;
@property (nonatomic) int32_t goroutines;
@property (nonatomic) int32_t connections;
@end

FOUNDATION_EXPORT const int32_t LibboxCommandCloseConnections;
FOUNDATION_EXPORT const int32_t LibboxCommandLog;
FOUNDATION_EXPORT const int32_t LibboxCommandServiceReload;
FOUNDATION_EXPORT const int32_t LibboxCommandServiceStop;
FOUNDATION_EXPORT const int32_t LibboxCommandStatus;

FOUNDATION_EXPORT BOOL LibboxClientCloseConnections(NSString* _Nullable sharedDirectory, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL LibboxClientServiceReload(NSString* _Nullable sharedDirectory, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL LibboxClientServiceStop(NSString* _Nullable sharedDirectory, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull LibboxFormatBytes(int64_t length);

FOUNDATION_EXPORT int32_t LibboxGetTunnelFileDescriptor(void);

FOUNDATION_EXPORT LibboxCommandClient* _Nullable LibboxNewCommandClient(NSString* _Nullable sharedDirectory, id<LibboxCommandClientHandler> _Nullable handler, LibboxCommandClientOptions* _Nullable options);

FOUNDATION_EXPORT LibboxCommandServer* _Nullable LibboxNewCommandServer(NSString* _Nullable sharedDirectory, id<LibboxCommandServerHandler> _Nullable handler);

FOUNDATION_EXPORT LibboxPProfServer* _Nullable LibboxNewPProfServer(long port);

FOUNDATION_EXPORT LibboxBoxService* _Nullable LibboxNewService(NSString* _Nullable configContent, id<LibboxPlatformInterface> _Nullable platformInterface, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void LibboxSetBasePath(NSString* _Nullable path);

FOUNDATION_EXPORT void LibboxSetMemoryLimit(void);

FOUNDATION_EXPORT void LibboxSetOutput(id<LibboxStandardOutput> _Nullable output);

FOUNDATION_EXPORT NSString* _Nonnull LibboxVersion(void);

@class LibboxCommandClientHandler;

@class LibboxCommandServerHandler;

@class LibboxOnDemandRule;

@class LibboxOnDemandRuleIterator;

@class LibboxPlatformInterface;

@class LibboxRoutePrefixIterator;

@class LibboxStandardOutput;

@class LibboxStringIterator;

@class LibboxTunInterface;

@class LibboxTunOptions;

@interface LibboxCommandClientHandler : NSObject <goSeqRefInterface, LibboxCommandClientHandler> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)connected;
- (void)disconnected:(NSString* _Nullable)message;
- (void)writeLog:(NSString* _Nullable)message;
- (void)writeStatus:(LibboxStatusMessage* _Nullable)message;
@end

@interface LibboxCommandServerHandler : NSObject <goSeqRefInterface, LibboxCommandServerHandler> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)serviceReload:(NSError* _Nullable* _Nullable)error;
- (BOOL)serviceStop:(NSError* _Nullable* _Nullable)error;
@end

@interface LibboxOnDemandRule : NSObject <goSeqRefInterface, LibboxOnDemandRule> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (id<LibboxStringIterator> _Nullable)dnsSearchDomainMatch;
- (id<LibboxStringIterator> _Nullable)dnsServerAddressMatch;
- (int32_t)interfaceTypeMatch;
- (NSString* _Nonnull)probeURL;
- (id<LibboxStringIterator> _Nullable)ssidMatch;
- (int32_t)target;
@end

@interface LibboxOnDemandRuleIterator : NSObject <goSeqRefInterface, LibboxOnDemandRuleIterator> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)hasNext;
- (id<LibboxOnDemandRule> _Nullable)next;
@end

@interface LibboxPlatformInterface : NSObject <goSeqRefInterface, LibboxPlatformInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)autoDetectInterfaceControl:(int32_t)fd error:(NSError* _Nullable* _Nullable)error;
- (BOOL)findConnectionOwner:(int32_t)ipProtocol sourceAddress:(NSString* _Nullable)sourceAddress sourcePort:(int32_t)sourcePort destinationAddress:(NSString* _Nullable)destinationAddress destinationPort:(int32_t)destinationPort ret0_:(int32_t* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)openTun:(id<LibboxTunOptions> _Nullable)options ret0_:(int32_t* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)packageNameByUid:(int32_t)uid error:(NSError* _Nullable* _Nullable)error;
- (BOOL)uidByPackageName:(NSString* _Nullable)packageName ret0_:(int32_t* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)useProcFS;
- (void)writeLog:(NSString* _Nullable)message;
@end

@interface LibboxRoutePrefixIterator : NSObject <goSeqRefInterface, LibboxRoutePrefixIterator> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)hasNext;
- (LibboxRoutePrefix* _Nullable)next;
@end

@interface LibboxStandardOutput : NSObject <goSeqRefInterface, LibboxStandardOutput> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)writeErrorOutput:(NSString* _Nullable)message;
- (void)writeOutput:(NSString* _Nullable)message;
@end

@interface LibboxStringIterator : NSObject <goSeqRefInterface, LibboxStringIterator> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)hasNext;
- (NSString* _Nonnull)next;
@end

@interface LibboxTunInterface : NSObject <goSeqRefInterface, LibboxTunInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)close:(NSError* _Nullable* _Nullable)error;
- (int32_t)fileDescriptor;
@end

@interface LibboxTunOptions : NSObject <goSeqRefInterface, LibboxTunOptions> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)getAutoRoute;
- (NSString* _Nonnull)getDNSServerAddress:(NSError* _Nullable* _Nullable)error;
- (id<LibboxStringIterator> _Nullable)getExcludePackage;
- (NSString* _Nonnull)getHTTPProxyServer;
- (int32_t)getHTTPProxyServerPort;
- (id<LibboxStringIterator> _Nullable)getIncludePackage;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet4Address;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet4RouteAddress;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet6Address;
- (id<LibboxRoutePrefixIterator> _Nullable)getInet6RouteAddress;
- (int32_t)getMTU;
- (BOOL)getStrictRoute;
- (BOOL)isHTTPProxyEnabled;
@end

#endif
