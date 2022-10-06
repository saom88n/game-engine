#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "components.hpp"
#include "raylib.h"
#include "raymath.h"
#include "Engine/Lib/Base/types.h"
#include "entt/entt.hpp"
#include <string>
namespace Engine {

    class GameObject {
    public:

        GameObject() = default;
        GameObject(UUID uuid, std::string name) : uuid(uuid), name(name){};
        std::string GetName() {
          return name; 
        }
    private:
        // UUID(u64) and u16 generation
        UUID uuid;
        std::string name;
    		entt::entity EntityHandle{ entt::null };
    };

}
#endif
