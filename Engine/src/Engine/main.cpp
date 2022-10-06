#include <iostream>
#include "Engine.h"
#include "entt/entt.hpp"

int main()
{
    Engine::WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    
    // Do something cool

    Engine::StopWindow();
    return EXIT_SUCCESS;
}
