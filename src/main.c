#include "includes.h"

int main(void)
{
    WindowInit(screen_width, screen_height, FPS);
    Loop();
    eCloseWindow();
    return EXIT_SUCCESS;
}