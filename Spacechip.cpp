#include "Spacechip.h"

Spaceship::Spaceship(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl) :
	GameObject(renderer, Vector2(32, 40), Vector2(0, 0)) {

	position = pos;
	rotation = rot;
	scale = scl;
}


void Spaceship::UpdateMovement(float dt) {

}