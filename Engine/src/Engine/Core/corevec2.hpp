// Functions for working with Vec2

#ifndef COREVEC2_HPP
#define COREVEC2_HPP

#include "Engine/Lib/Base/types.h"
#include "raymath.h"
#include "raylib.h"

namespace Engine {
    
    Vec2 GetCenterOfScreen() {
        return (Vec2) {(f32) SCREEN_WIDTH / 2, (f32) SCREEN_HEIGHT / 2};
    }

    f32 Vec2MoveX(Vec2 v, Vec2 t, f32 d) {
        return v.x > 0 ? v.x-d : v.x ; 
    }

    f32 Vec2MoveY(Vec2 v, Vec2 t, f32 d) {
        return v.y > 0 ? v.y-d : v.y ; 
    }
}
#endif
