#ifndef DEBUG_H
#define DEBUG_H

#include "raylib.h"
#include "util.h"

void print_debug_ingo() {
    LOG_PRINT("%d FPS\n", GetFPS());
}

#endif