#ifndef CUTIL_H
#define CUTIL_H

#include "cincludes.h"

Vec2 get_center() {
    return (Vec2) {(f32) screen_width / 2, (f32) screen_height / 2};
}

#endif