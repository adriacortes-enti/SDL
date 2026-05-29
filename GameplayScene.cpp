#include "GameplayScene.h"


void GamePlayScene::Start(SDL_Renderer* rend) {
	Scene::Start(rend);

	objects.push_back(new Spaceship(rend, Vector2(250, 250), 0, Vector2(1,1)));
    renderer = rend;
}

void GamePlayScene::Update(float dt)  {
    Scene::Update(dt);

    asteroidTimer += dt;
    if (asteroidTimer >= 3.0f) {
        Vector2 pos(rand() % 500, rand() % 500);
        float rot = 0.0f;
        Vector2 scl(1.0f, 1.0f);
        if (objects.size() <= 4)
        {
            objects.push_back(new Asteroid(renderer, pos, rot, scl));
            asteroidTimer = 0.0f;
        }
    }
}

void GamePlayScene::Render(SDL_Renderer* rend) {
	Scene::Render(rend);
}

void GamePlayScene::Exit() {

}