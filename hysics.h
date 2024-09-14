#ifndef PHYSICS_H
#define PHYSICS_H

class PhysicsEngine {
public:
    float gravity = 9.8f;

    glm::vec3 ApplyGravity(glm::vec3 position, float deltaTime) {
        return glm::vec3(position.x, position.y - gravity * deltaTime, position.z);
    }
};

#endif
