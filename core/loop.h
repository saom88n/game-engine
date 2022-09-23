#ifndef LOOP_H
#define LOOP_H
#include "cincludes.h"

int loop() {
    Vec2 ballPosition = { (f32)screen_width/2, (f32)screen_height/2 };
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            LOG_PRINT("Drawed success!\n");
        EndDrawing();
    }
    return EXIT_SUCCESS;
}

#endif