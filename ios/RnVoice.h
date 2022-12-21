
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnVoiceSpec.h"

@interface RnVoice : NSObject <NativeRnVoiceSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnVoice : NSObject <RCTBridgeModule>
#endif

@end
