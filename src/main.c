#include "includes.h"

int main(void)
{
    window_init(screen_width, screen_height, FPS);
    loop();
    close_window();
    return EXIT_SUCCESS;
}