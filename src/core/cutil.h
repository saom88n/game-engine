#ifndef CUTIL_H
#define CUTIL_H

#include "cincludes.h"

Vec2 get_center() {
    return (Vec2) {(f32) screen_width / 2, (f32) screen_height / 2};
}

f32 Vec2MoveX(Vec2 v, Vec2 t, f32 d) {
    return v.x > 0 ? v.x-d : v.x ; 
}

f32 Vec2MoveY(Vec2 v, Vec2 t, f32 d) {
    return v.y > 0 ? v.y-d : v.y ; 
}

void V2MoveTowards(Vec2 v, Vec2 t, f32 d) {
    v.x = Vector2MoveTowards(v, t, d).x;
    v.y = Vector2MoveTowards(v, t, d).y;
}

#endif