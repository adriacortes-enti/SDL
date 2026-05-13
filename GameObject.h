#pragma once
#include "Utils.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class GameObject
{
protected:
	Vector2 position;
	float rotation;
	Vector2 scale;

	SDL_Texture* texture;
	Vector2 size; //width and height texture cut
	Vector2 padding; //pos texture cut

	SDL_Texture* CreateTexture(SDL_Renderer* renderer);
public:
	GameObject(SDL_Renderer* renderer, Vector2 textSize, Vector2 textPadding);
	void Render(SDL_Renderer* renderer);
	void Update(float dt);

};
