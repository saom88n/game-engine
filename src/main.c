#include "includes/includes.h"

int main(void)
{
    WindowInit(screen_width, screen_height, FPS);
    Loop();
    StopWindow();
    return EXIT_SUCCESS;
}