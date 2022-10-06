#include "Engine.h"
#include "entt/entt.hpp"

#include <iostream>

int main(void)
{
    Engine::WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    Engine::Scene scene;
    Engine::GameObject e = scene.CreateObjectWithUUID(Engine::UUID(), "niger");
    scene.DestroyObject(e);
    Engine::StopWindow();
    return EXIT_SUCCESS;
}
