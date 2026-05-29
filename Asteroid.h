#pragma once
#include "GameObject.h"
#include <cmath>
#include <cstdlib>

class Asteroid : public GameObject
{
public:
	Asteroid(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl);

	void UpdateMovement(float dt) override;
private:
	Vector2 velocity;
	float angle;
	float speed;
};

