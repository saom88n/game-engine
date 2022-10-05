#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "components.h"
#include "../../includes/coreincludes.h"

namespace Engine {

    class GameObject {
    public:

        GameObject() = default;
        GameObject(UUID uuid, u16 generation) : uuid(uuid), generation(generation) {};

        template<typename T, typename... Args>
        T& AddComponent(Args&&... args) { // Add component to the object 
            T& component = new T();
            return &component;
        }

    private:
        // UUID(u64) and u16 generation
        UUID uuid;
        u16 generation;
    };

}
#endif
