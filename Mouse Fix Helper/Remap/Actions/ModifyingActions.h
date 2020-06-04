//
// --------------------------------------------------------------------------
// ModifyingActions.h
// Created for Mac Mouse Fix (https://github.com/noah-nuebling/mac-mouse-fix)
// Created by Noah Nuebling in 2020
// Licensed under MIT
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ModifyingActions : NSObject

typedef enum {
    kMFModifierStateInitialized,
    kMFModifierStateInUse,
} MFModifierState;

+ (void)initializeModifiersForButton:(int)button withActionArray:(NSArray *)actionArray;


@end

NS_ASSUME_NONNULL_END
