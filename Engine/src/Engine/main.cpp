#include "Engine.h"
#include "entt/entt.hpp"

int main(void)
{
    Engine::WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    
    Engine::StopWindow();
    return EXIT_SUCCESS;
}
