/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKWebView, NSString, WKWebViewContentProviderRegistry, _WKVisitedLinkProvider, WKPreferences, WKProcessPool, WKUserContentController, _WKWebsiteDataStore;

@interface WKWebViewConfiguration : NSObject <NSCopying> {
    struct LazyInitialized<WKProcessPool> { 
        boolm_isInitialized; 
        struct RetainPtr<WKProcessPool> { 
            void *m_ptr; 
        } m_value; 
    } _processPool;
    struct LazyInitialized<WKPreferences> { 
        boolm_isInitialized; 
        struct RetainPtr<WKPreferences> { 
            void *m_ptr; 
        } m_value; 
    } _preferences;
    struct LazyInitialized<WKUserContentController> { 
        boolm_isInitialized; 
        struct RetainPtr<WKUserContentController> { 
            void *m_ptr; 
        } m_value; 
    } _userContentController;
    struct LazyInitialized<_WKVisitedLinkProvider> { 
        boolm_isInitialized; 
        struct RetainPtr<_WKVisitedLinkProvider> { 
            void *m_ptr; 
        } m_value; 
    } _visitedLinkProvider;
    struct LazyInitialized<_WKWebsiteDataStore> { 
        boolm_isInitialized; 
        struct RetainPtr<_WKWebsiteDataStore> { 
            void *m_ptr; 
        } m_value; 
    } _websiteDataStore;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    } _relatedWebView;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    } _alternateWebViewForNavigationGestures;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _groupIdentifier;
    struct LazyInitialized<WKWebViewContentProviderRegistry> { 
        boolm_isInitialized; 
        struct RetainPtr<WKWebViewContentProviderRegistry> { 
            void *m_ptr; 
        } m_value; 
    } _contentProviderRegistry;
    bool_suppressesIncrementalRendering;
    bool_allowsInlineMediaPlayback;
    bool_mediaPlaybackRequiresUserAction;
    bool_mediaPlaybackAllowsAirPlay;
    long long _selectionGranularity;
}

@property(setter=_setRelatedWebView:) WKWebView * _relatedWebView;
@property(setter=_setGroupIdentifier:,copy) NSString * _groupIdentifier;
@property(setter=_setVisitedLinkProvider:,retain) _WKVisitedLinkProvider * _visitedLinkProvider;
@property(setter=_setWebsiteDataStore:,retain) _WKWebsiteDataStore * _websiteDataStore;
@property(setter=_setAlternateWebViewForNavigationGestures:) WKWebView * _alternateWebViewForNavigationGestures;
@property(retain) WKProcessPool * processPool;
@property(retain) WKPreferences * preferences;
@property(retain) WKUserContentController * userContentController;
@property bool suppressesIncrementalRendering;
@property bool allowsInlineMediaPlayback;
@property bool mediaPlaybackRequiresUserAction;
@property bool mediaPlaybackAllowsAirPlay;
@property long long selectionGranularity;
@property(setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry * _contentProviderRegistry;


- (void)_setContentProviderRegistry:(id)arg1;
- (void)_setAlternateWebViewForNavigationGestures:(id)arg1;
- (void)_setWebsiteDataStore:(id)arg1;
- (void)_setVisitedLinkProvider:(id)arg1;
- (void)setUserContentController:(id)arg1;
- (id)_alternateWebViewForNavigationGestures;
- (id)_contentProviderRegistry;
- (id)_groupIdentifier;
- (id)_websiteDataStore;
- (id)_visitedLinkProvider;
- (id)userContentController;
- (void)_validate;
- (void)setProcessPool:(id)arg1;
- (id)processPool;
- (id)_relatedWebView;
- (void)_setRelatedWebView:(id)arg1;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)suppressesIncrementalRendering;
- (id)preferences;
- (void)setPreferences:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_setGroupIdentifier:(id)arg1;
- (bool)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (bool)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (long long)selectionGranularity;

@end