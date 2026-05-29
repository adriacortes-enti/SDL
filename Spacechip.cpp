#include "Spacechip.h"

Spaceship::Spaceship(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl) :
	GameObject(renderer, Vector2(32, 40), Vector2(0, 0)) {

	position = pos;
	rotation = rot;
	scale = scl;

	linearVelocity = Vector2();
	angularVelocity = 0.0f;

	linearAcceleration = Vector2();
	angularAcceleration = 0.0f;

	linearDrag = 1.2f;
	angularDrag = 6.0f;

	linearAccelFactor = 50.0f; // pixels / sec^2
	angularAccelFactor = 1800.0f; // Deg / sec^2

	/*linearAcceleration = Vector2(1.5f, 1.5f);
	angularAcceleration = 1.5f;*/
}


void Spaceship::UpdateMovement(float dt) {
    linearAcceleration = Vector2();

    if (IM.GetKey(SDLK_w, HOLD))
    {
        float rotInRad = rotation * (M_PI / 180.0f);
        Vector2 dir;
        dir.x = cos(rotInRad);
        dir.y = sin(rotInRad);

        linearAcceleration = dir * linearAccelFactor;
    }
    
    angularAcceleration = 0.f;

    if (IM.GetKey(SDLK_d, HOLD))
    {
        angularAcceleration = angularAccelFactor;
    }

    if (IM.GetKey(SDLK_a, HOLD))
    {
        angularAcceleration = -angularAccelFactor;
    }
    

    GameObject::UpdateMovement(dt);
}