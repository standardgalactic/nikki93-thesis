#ifndef SCENE_H
#define SCENE_H

#include <vector>

#include "maths.h"
#include "vr.h"

class Game;

class Scene
{
public:
    void update(void);
    void draw(const std::vector<vec3> &points, const VR &vr);

private:
    float m_yaw = 0;
    float m_pitch = 0;
    float m_dist = 2;
    vec2 m_prev_mouse;
};

#endif
