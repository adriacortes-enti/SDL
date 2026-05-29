#pragma once
#include "GameObject.h"

class Laser : public GameObject {
public:
    Laser(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl)
        : GameObject(renderer, Vector2(10, 2), Vector2(0, 0)) // tamaño y padding del láser
    {
        position = pos;
        rotation = rot;
        scale = scl;
    }


    void UpdateMovement(float dt) override {
        //direccion de rotacion
        float speed = 500.0f;
        linearVelocity = Vector2(cos(rotation), sin(rotation)) * speed;
        position = position + linearVelocity * dt;

        GameObject::UpdateMovement(dt);
    }
};
 