#include "includes/includes.h"

int main(void)
{
    /*
    WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
    Loop();
    StopWindow();*/

    GameObject e = {1, 1};
    PrintInfo(e);
    PrintInfo(e);
    SetId(&e, 3);
    PrintInfo(e);
    return EXIT_SUCCESS;
}