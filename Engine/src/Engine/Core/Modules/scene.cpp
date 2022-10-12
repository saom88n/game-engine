#pragma once

#include "Scene.hpp"

#include "Engine/Lib/Base/types.h"
#include "entt/entt.hpp"
#include "gameobject.hpp"

namespace Engine {
Scene::Scene() {}
Scene::~Scene() {}
GameObject Scene::CreateObjectWithUUID(UUID uuid, const std::string &name) {
  GameObject obj = {Registry.create(), this};
  return obj;
}
GameObject Scene::CreateObject(const std::string &name) {
  return CreateObjectWithUUID(UUID(), name);
}
void Scene::DestroyObject(GameObject obj) {
  Registry.destroy(obj);
  std::cout << "Object " << obj.GetName() << " destroyed" << std::endl;
}
} // namespace Engine
