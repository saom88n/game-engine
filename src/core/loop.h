#ifndef LOOP_H
#define LOOP_H

#include "cincludes.h"
#include "cutil.h"
#include "entity/Entity.h"

int loop() {
    Rect r = {get_center().x, get_center().y, 50, 50};
    f32 delta = GetFrameTime();
    while (!WindowShouldClose()) {
        V2MoveTowards((Vec2) {r.x, r.y}, (Vec2) {100, 100}, 4);
        BeginDrawing();
            ClearBackground(RAYWHITE);
                DrawRectangleRec(r, BLACK);
            LOG_PRINT("%f", r.x);
        EndDrawing();
    }
    return EXIT_SUCCESS;
}

#endif