#ifndef COMPONENTS_HPP
#define COMPONENTS_HPP

#include "Engine/Lib/Base/types.h"
#include "raylib.h"
#include "raymath.h"

namespace Engine {
// Transform component.
class TransformComponent {
  // Functions and Constructors
public:
  TransformComponent() = default;
  TransformComponent(const TransformComponent &) = default;
  TransformComponent(const Vec3 &translation) : Translation(translation) {}

  Mat GetTransform() const {
    Mat rotation =
        QuaternionToMatrix((Quaternion){Rotation.x, Rotation.y, Rotation.z});

    return MatrixMultiply(
        MatrixMultiply(
            MatrixTranslate(Translation.x, Translation.y, Translation.z),
            rotation),
        MatrixScale(Scale.x, Scale.y, Scale.z));
  }
  // Variables
public:
  Vec3 Translation = {0.0f, 0.0f, 0.0f};
  Vec3 Rotation = {0.0f, 0.0f, 0.0f};
  Vec3 Scale = {1.0f, 1.0f, 1.0f};
};
// Colider component.
class BoxCollider2DComponent {
  // Functions and Constructors
public:
  BoxCollider2DComponent() = default;
  BoxCollider2DComponent(const BoxCollider2DComponent &) = default;

  // Variables
public:
  Vec2 Offset = {0.0f, 0.0f};
  Vec2 Size = {0.5f, 0.5f};

  f32 Density = 1.0f;
  f32 Friction = 0.5f;
  f32 Restitution = 0.0f;
  f32 RestitutionThreshold = 0.5f;

  void *RuntimeFixture = nullptr;
};
// Main physics component.
class Rigidbody2DComponent {
  // Functions and Constructors
public:
  Rigidbody2DComponent() = default;
  Rigidbody2DComponent(const Rigidbody2DComponent &) = default;

  // Variables
public:
  enum class BodyType { Static = 0, Dynamic };
  BodyType Type = BodyType::Static;
  bool FixedRotation = false;

  void *RuntimeBody = nullptr;
};
// Component to use camera for object.
class CameraComponent {
  // Functions and Constructor
public:
  CameraComponent() = default;
  CameraComponent(Vec2 offset, Vec2 target, f32 rotation, f32 zoom)
      : Offset(offset), Target(target), Rotation(rotation), Zoom(zoom) {}
  CameraComponent(const CameraComponent &) = default;
  // Variables
public:
  Vec2 Offset = {0.0f, 0.0f};
  Vec2 Target = {1.0f, 1.0f};
  f32 Rotation = 0.0f;
  f32 Zoom = 1.0f;
  Cam2D Camera = {Offset, Target, Rotation, Zoom};
  bool FixedAspectRatio = false;
};

// Component to rendeer sprite with color / texture.

class SpriteRendererComponent {
  // Functions and Constructors
public:
  SpriteRendererComponent() = default;
  SpriteRendererComponent(const SpriteRendererComponent &) = default;
  SpriteRendererComponent(const Color color) : color(color) {}
  // Variables
public:
  Color color;
  T2D Texture;
  f32 TilingFactor = 1.0f;
};
// List of all components
template <typename... Component> struct ComponentGroup {};

using AllComponents = ComponentGroup<TransformComponent, BoxCollider2DComponent,
                                     CameraComponent, SpriteRendererComponent>;
} // namespace Engine

#endif
