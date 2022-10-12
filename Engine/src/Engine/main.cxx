#include "Engine.h"
#include "entt/entt.hpp"

#include <iostream>

int main(void) {
  Engine::WindowInit(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
  Engine::Scene s;
  Engine::GameObject o = s.CreateObject("1");
  s.DestroyObject(o);
  Engine::StopWindow();
  return EXIT_SUCCESS;
}
