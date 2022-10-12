#ifndef SCENE_HPP
#define SCENE_HPP

#include "Engine/Lib/Base/types.h"
#include "Engine/Lib/Base/uuid.h"
#include "entt/entt.hpp"
#include "gameobject.hpp"
#include <string>

namespace Engine {

class GameObject;

class Scene {
public:
  Scene();
  ~Scene();
  GameObject CreateObject(const std::string &name = std::string());
  GameObject CreateObjectWithUUID(UUID uuid,
                                  const std::string &name = std::string());
  void DestroyObject(GameObject obj);
  
private:
  entt::registry Registry;
  friend class GameObject;
};

} // namespace Engine

#endif
