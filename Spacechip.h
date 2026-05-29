#pragma once
#include "GameObject.h"
#include "InputManager.h"
#include "GameEngine.h"

class Spaceship : public GameObject {

public:
	Spaceship(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl);

	void UpdateMovement(float dt) override;
private:
	float screenWidth;
	float screenHeight;
};