#pragma once

#ifndef WINDOW_H
#define WINDOW_H

#include "cincludes.h"

void window_init(u16 screen_width, u16 screen_height) {
    InitWindow(screen_width, screen_height, "Core");
    SetTargetFPS(60);
}

void close_window() {
    CloseWindow();
}

#endif