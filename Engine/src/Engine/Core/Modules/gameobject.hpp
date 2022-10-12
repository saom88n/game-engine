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
  GameObject(entt::entity handle, Scene *scene) : EntityHandle(handle), scene(scene){};
  GameObject(const GameObject &other) = default;
  GameObject(UUID uuid, std::string name) : uuid(uuid), name(name){};
  std::string GetName() { return name; }
  operator entt::entity() const { return EntityHandle; }
  operator uint32_t() const { return (uint32_t)EntityHandle; }
  operator bool() const { return EntityHandle != entt::null; }

private:
  UUID uuid;
  std::string name;
  entt::entity EntityHandle{entt::null};
  Scene *scene = nullptr;
};

} // namespace Engine
#endif
