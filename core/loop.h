#pragma once

#ifndef LOOP_H
#define LOOP_H

#include "cincludes.h"

int loop() {
    Vec2 ballPosition = { (f32)screen_width/2, (f32)screen_height/2 };
    f32 i = 1;
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Ball", 10, 10, 20, DARKGRAY);
            DrawCircleV(ballPosition, i, MAROON);
            WARNING_PRINT("Drawed success!\n");
        EndDrawing();
        i = i <= 100 ? i+0.5 : i-99;
    }
    return EXIT_SUCCESS;
}

#endif