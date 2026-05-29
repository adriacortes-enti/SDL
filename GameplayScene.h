#pragma once
#include "Scene.h"
#include "Spacechip.h"
#include "Asteroid.h"

class GamePlayScene : public Scene {
	SDL_Renderer* renderer = nullptr;
	float asteroidTimer = 0.0f;
public:
	GamePlayScene() : Scene() {}

	void Start(SDL_Renderer* rend) override;
	void Update(float dt) override;
	void Render(SDL_Renderer* rend) override;
	void Exit() override;

};