#pragma once
#include "GameObject.h"

class Spaceship : public GameObject {

public:
	Spaceship(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl);

	void UpdateMovement(float dt);

};