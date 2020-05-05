//
//  Mathematics.h
//  Pods
//
//  Created by ZHK on 2020/5/5.
//

#import <Foundation/Foundation.h>


FOUNDATION_STATIC_INLINE NSInteger
clamp(NSInteger x, NSInteger min, NSInteger max) {
    if (x < min) {
        return min;
    }
    if (x > max) {
        return max;
    }
    return x;
}

FOUNDATION_STATIC_INLINE CGFloat
clampf(CGFloat x, CGFloat min, CGFloat max) {
    if (x < min) {
        return min;
    }
    if (x > max) {
        return max;
    }
    return x;
}

