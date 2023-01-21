#ifndef pbr_material_h
#define pbr_material_h

#include <glm/glm.hpp>

#include <polyhedron/core/material.h>

namespace polyhedron {

class PBRMaterial : public Material {
public:
    glm::vec4 baseColor;

    float metallic = 1.0;
    float roughness = 1.0;
    float ao = 1.0;

    PBRMaterial(glm::vec4 baseColor, float metallic, float roughness);

    virtual void use() override;
};

}

#endif