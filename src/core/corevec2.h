// Functions for working with Vec2

#ifndef COREVEC2_H
#define COREVEC2_H

#include "coreincludes.h"

Vec2 GetCenterOfScreen() {
    return (Vec2) {(f32) screen_width / 2, (f32) screen_height / 2};
}

f32 Vec2MoveX(Vec2 v, Vec2 t, f32 d) {
    return v.x > 0 ? v.x-d : v.x ; 
}

f32 Vec2MoveY(Vec2 v, Vec2 t, f32 d) {
    return v.y > 0 ? v.y-d : v.y ; 
}

#endif