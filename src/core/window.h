#ifndef WINDOW_H
#define WINDOW_H

#include "../includes/coreincludes.h"

void WindowInit(u16 screen_width, u16 screen_height, u8 fps) {
    InitWindow(screen_width, screen_height, "Core");
    SetTargetFPS(fps);
    LOG_PRINT("WINDOW INIT SUCCESS");
}
void StopWindow() {
    CloseWindow();
    LOG_PRINT("WINDOW CLOSE SUCCESS");
}

#endif