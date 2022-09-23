#include "includes.h"

int main(void)
{
    window_init(screen_width, screen_height, 30);
    loop();
    close_window();
    return EXIT_SUCCESS;
}