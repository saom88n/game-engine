#include "includes/includes.h"

int main(void)
{
    /*
    WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    Loop();
    StopWindow();*/
    Engine::WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    Engine::TransformComponent a;
    printf("%f %f %f", a.Scale.x, a.Scale.y, a.Scale.z);
    Mat b = a.GetTransform();
    Engine::StopWindow();
    return EXIT_SUCCESS;
}
