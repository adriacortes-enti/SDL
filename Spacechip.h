#pragma once
#include "GameObject.h"
#include "InputManager.h"
#include "Laser.h"

class Spaceship : public GameObject {
	SDL_Renderer* renderer;
	std::vector<GameObject*>* gameObjects;
public:
	Spaceship(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl, std::vector<GameObject*>* gameObjects);

	void UpdateMovement(float dt) override;
	void ShootLaser();
};