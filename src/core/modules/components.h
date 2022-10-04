#ifndef COMPONENTS_H
#define COMPONENTS_H

#include "../../includes/coreincludes.h"

namespace Engine {

    class TransformComponent {
    // Functions and Constructors
    public:

        TransformComponent() = default;
		TransformComponent(const TransformComponent&) = default;
		TransformComponent(const Vec3& translation)
			: Translation(translation) {}
        
        Mat GetTransform() const {
            Mat rotation = QuaternionToMatrix((Quaternion) {Rotation.x, Rotation.y, Rotation.z }); // RMAPI Matrix QuaternionToMatrix(Quaternion q)
            
            return MatrixMultiply(MatrixMultiply(MatrixTranslate(Translation.x, Translation.y, Translation.z),
                                                 rotation), MatrixScale(Scale.x, Scale.y, Scale.z));
        } 

    // Variables
    public:

        Vec3 Translation = { 0.0f, 0.0f, 0.0f };
        Vec3 Rotation = { 0.0f, 0.0f, 0.0f };
        Vec3 Scale = { 1.0f, 1.0f, 1.0f };
    };

    class BoxCollider2DComponent {
    // Functions and Constructors
    public:

        BoxCollider2DComponent() = default;
		BoxCollider2DComponent(const BoxCollider2DComponent&) = default;

    // Variables
    public:

        Vec2 Offset = { 0.0f, 0.0f };
        Vec2 Size = { 0.5f, 0.5f };

        float Density = 1.0f;
		float Friction = 0.5f;
		float Restitution = 0.0f;
		float RestitutionThreshold = 0.5f;

        void* RuntimeFixture = nullptr;
    };

    class Rigidbody2DComponent {
    // Functions and Constructors
    public:

        Rigidbody2DComponent() = default;
		Rigidbody2DComponent(const Rigidbody2DComponent&) = default;

    // Variables
    public:

        enum class BodyType { Static = 0, Dynamic };
        BodyType Type = BodyType::Static;
        bool FixedRotation = false;

    	void* RuntimeBody = nullptr;
    };

    class CameraComponent {
    // Functions and Constructor
    public:

        CameraComponent() = default;
        CameraComponent(Vec2 offset, Vec2 target, f32 rotation, f32 zoom) : offset(offset), target(target),
                                                                            rotation(rotation), zoom(zoom) {}
		CameraComponent(const CameraComponent&) = default;

    // Variables
    public:
        Vec2 offset = { 0.0f, 0.0f };
        Vec2 target = { 1.0f, 1.0f };
        f32 rotation = 0.0f;
        f32 zoom = 1.0f;
        Cam2D Camera = {offset, target, rotation, zoom};
        bool FixedAspectRatio = false;
    };
    class SpriteRendererComponent {
    // Functions and Constructors
    public:
        SpriteRendererComponent() = default;
		SpriteRendererComponent(const SpriteRendererComponent&) = default;
		SpriteRendererComponent(const Color color)
			: color(color) {}

    // Variables
    public: 
        Color color;
        T2D Texture;
        float TilingFactor = 1.0f;

    };
    template<typename... Component>
    struct ComponentGroup {};

    using AllComponents = 
        ComponentGroup<TransformComponent, BoxCollider2DComponent, CameraComponent,
                       SpriteRendererComponent>;
}

#endif