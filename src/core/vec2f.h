#ifndef VEC2F_H
#define VEC2F_H

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