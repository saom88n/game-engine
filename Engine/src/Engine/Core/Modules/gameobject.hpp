#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Engine/Lib/Base/types.h"
#include "Engine/Lib/Base/uuid.h"
#include "components.hpp"
#include "entt/entt.hpp"
#include "raylib.h"
#include "raymath.h"
#include "scene.hpp"
#include <string>
namespace Engine {

class GameObject {
public:
  GameObject() = default;
  GameObject(entt::entity handle, Scene *scene)
      : EntityHandle(handle), scene(scene){};
  GameObject(const GameObject &other) = default;
  ~GameObject() { delete scene; }

  template <typename T, typename... Args>
  T &AddOrReplaceComponent(Args &&...args) {
    T &component = scene->Registry.emplace_or_replace<T>(
        EntityHandle, std::forward<Args>(args)...);
    scene->OnComponentAdded<T>(*this, component);
    return component;
  }
  template <typename T, typename... Args> T &AddComponent(Args &&...args) {
    T &component =
        scene->Registry.emplace<T>(EntityHandle, std::forward<Args>(args)...);
    scene->OnComponentAdded<T>(*this, component);
    return component;
  }

  operator entt::entity() const { return EntityHandle; }
  operator uint32_t() const { return (uint32_t)EntityHandle; }
  operator bool() const { return EntityHandle != entt::null; }

private:
  entt::entity EntityHandle{entt::null};
  Scene *scene = nullptr;
};

} // namespace Engine
#endif
