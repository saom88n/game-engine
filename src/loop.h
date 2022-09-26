#ifndef LOOP_H
#define LOOP_H

#include "includes.h"

#define MAX_COLUMNS 20

int Loop() {
    // Main loop in engine
    // Test game 
    Camera camera = { 0 };
    camera.position = (Vec3){ 4.0f, 2.0f, 4.0f };
    camera.target = (Vec3){ 0.0f, 1.8f, 0.0f };
    camera.up = (Vec3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 65.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    f32 heights[MAX_COLUMNS] = { 0 };
    Vec3 positions[MAX_COLUMNS] = { 0 };
    Color colors[MAX_COLUMNS] = { 0 };

    for (i16 i = 0; i < MAX_COLUMNS; i++)
    {
        heights[i] = (f32)GetRandomValue(1, 12);
        positions[i] = (Vec3){ (f32)GetRandomValue(-15, 15), heights[i]/2.0f, (f32)GetRandomValue(-15, 15) };
        colors[i] = (Color){ GetRandomValue(20, 255), GetRandomValue(10, 55), 30, 255 };
    }
    SetCameraMode(camera, CAMERA_FIRST_PERSON); // Set a first person camera mode

    while (!WindowShouldClose()) {
        UpdateCamera(&camera);

        BeginDrawing();
            ClearBackground(RAYWHITE);
            BeginMode3D(camera);

                DrawPlane((Vec3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 32.0f, 32.0f }, LIGHTGRAY); // Draw ground
                DrawCube((Vec3){ -16.0f, 2.5f, 0.0f }, 1.0f, 5.0f, 32.0f, BLUE);     // Draw a blue wall
                DrawCube((Vec3){ 16.0f, 2.5f, 0.0f }, 1.0f, 5.0f, 32.0f, LIME);      // Draw a green wall
                DrawCube((Vec3){ 0.0f, 2.5f, 16.0f }, 32.0f, 5.0f, 1.0f, GOLD);      // Draw a yellow wall

                // Draw some cubes around
                for (i16 i = 0; i < MAX_COLUMNS; i++)
                {
                    DrawCube(positions[i], 2.0f, heights[i], 2.0f, colors[i]);
                    DrawCubeWires(positions[i], 2.0f, heights[i], 2.0f, MAROON);
                }

            EndMode3D();

            DrawRectangle( 10, 10, 220, 70, Fade(SKYBLUE, 0.5f));
            DrawRectangleLines( 10, 10, 220, 70, BLUE);

            DrawText("First person camera default controls:", 20, 20, 10, BLACK);
            DrawText("- Move with keys: W, A, S, D", 40, 40, 10, DARKGRAY);
            DrawText("- Mouse move to look around", 40, 60, 10, DARKGRAY);

        EndDrawing();
    }
    return EXIT_SUCCESS;
}

#endif