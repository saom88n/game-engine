#pragma once

#include "scene.hpp"

#include "Engine/Lib/Base/types.h"
#include "Engine/Lib/Base/uuid.h"
#include "entt/entt.hpp"
#include "gameobject.hpp"
#include <iostream>

namespace Engine {
Scene::Scene() {}
Scene::~Scene() {}
GameObject Scene::CreateObjectWithUUID(UUID uuid, const std::string &name) {
  GameObject obj = {Registry.create(), this};
  obj.AddComponent<IDComponent>(uuid);
  obj.AddComponent<TransformComponent>();
  auto &tag = obj.AddComponent<TagComponent>();
  tag.Tag = name.empty() ? "Entity" : name;
  return obj;
}
GameObject Scene::CreateObject(const std::string &name) {
  return CreateObjectWithUUID(UUID(), name);
}
void Scene::DestroyObject(GameObject obj) {
  Registry.destroy(obj);
  std::cout << "Object " << obj.GetName() << " destroyed" << std::endl;
}
template <typename T>
void Scene::OnComponentAdded(GameObject obj, T &component) {
  static_assert(sizeof(T) == 0);
}

template <>
void Scene::OnComponentAdded<IDComponent>(GameObject obj,
                                          IDComponent &component) {}
template <>
void Scene::OnComponentAdded<TagComponent>(GameObject obj,
                                           TagComponent &component) {}
template <>
void Scene::OnComponentAdded<TransformComponent>(
    GameObject obj, TransformComponent &component) {}
template <>
void Scene::OnComponentAdded<BoxCollider2DComponent>(
    GameObject obj, BoxCollider2DComponent &component) {}
template <>
void Scene::OnComponentAdded<Rigidbody2DComponent>(
    GameObject obj, Rigidbody2DComponent &component) {}
template <>
void Scene::OnComponentAdded<SpriteRendererComponent>(
    GameObject obj, SpriteRendererComponent &component) {}
template <>
void Scene::OnComponentAdded<CameraComponent>(GameObject obj,
                                              CameraComponent &component) {}
} // namespace Engine
