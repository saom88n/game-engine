#ifndef SCENE_HPP
#define SCENE_HPP

/*

    Scene class with all GameObjects etc. 
    TODO : Add particles to the scene, make particles. ( MyScene.AddParticle(Type type, Vec scale, 
    TODO :                                               Vec2 pos, Color color ))
    
*/

namespace Engine {

    class Scene
    {
    public:
        Scene() = default;
        Scene(Scene &&) = default;
        Scene(const Scene &) = default;
        Scene &operator=(Scene &&) = default;
        Scene &operator=(const Scene &) = default;
        ~Scene() = default;

    private:
        
    }; 

}

#endif
