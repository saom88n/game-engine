#ifndef TYPES_H
#define TYPES_H

#include <inttypes.h>
#include "raymath.h"
#include "raylib.h"

// Default types 

typedef uint8_t  u8 ;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t   i8 ;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;

typedef float    f32;
typedef double   f64;

// Vector types

typedef Vector2  Vec2;
typedef Vector3  Vec3;
typedef Vector4  Vec4;

// Figures etc.

typedef Texture2D T2D ;
typedef Rectangle Rect;
typedef Image     Img ;

#endif
