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

	linearAccelFactor = 500.0f; // pixels / sec^2
	angularAccelFactor = 180000.0f; // Deg / sec^2

	/*linearAcceleration = Vector2(1.5f, 1.5f);
	angularAcceleration = 1.5f;*/
}


void Spaceship::UpdateMovement(float dt) {
	linearAcceleration = Vector2();

	if (IM.GetKey(SDLK_w, HOLD))
	{
		Vector2 dir;
		float rotInRad = rotation * (M_PI / 180.0f);
		dir.x = cos(rotation);
		dir.y = sin(rotation);

		linearAcceleration = dir * linearAccelFactor;
	}
	
	angularAcceleration = 0.f;

	if (IM.GetKey(SDLK_d, HOLD))
	{
		angularAcceleration = angularAccelFactor * dt;
	}

	if (IM.GetKey(SDLK_a, HOLD))
	{
		angularAcceleration = -angularAccelFactor * dt;
	}
	

	GameObject::UpdateMovement(dt);
}