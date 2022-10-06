#ifndef SCENE_HPP
#define SCENE_HPP

#include "entt/entt.hpp"
#include "Engine/Lib/Base/uuid.h"
#include "Engine/Lib/Base/types.h"
#include "gameobject.hpp"
#include <string>

namespace Engine {

    class Scene {
    public:
      Scene();
      ~Scene(); 
      GameObject CreateObject(const std::string& name = std::string()); 
      GameObject CreateObjectWithUUID(UUID uuid, const std::string& name = std::string()); 
      void DestroyObject(GameObject obj);
    private:
      entt::registry Registry;
      
    }; 

}

#endif
