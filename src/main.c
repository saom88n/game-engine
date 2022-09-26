#include "includes/includes.h"

int main(void)
{
    WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    Loop();
    StopWindow();
    return EXIT_SUCCESS;
}