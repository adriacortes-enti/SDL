#include "Asteroid.h"

Asteroid::Asteroid(SDL_Renderer* renderer, Vector2 pos, float rot, Vector2 scl)
    : GameObject(renderer, Vector2(32, 40), Vector2(0, 0))
{
    position = pos;
    rotation = rot;
    scale = scl;

    angle = static_cast<float>(rand()) / RAND_MAX * 2.0f * M_PI;
    speed = 10.0f;
}

void Asteroid::UpdateMovement(float dt)
{
    linearVelocity = Vector2(std::cos(angle) * speed, std::sin(angle) * speed);

    //hacer tp al otro lado de la pantalla
    if (position.x < 0) position.x += screenWidth;
    if (position.x > screenWidth) position.x -= screenWidth;
    if (position.y < 0) position.y += screenHeight;
    if (position.y > screenHeight) position.y -= screenHeight;

    GameObject::UpdateMovement(dt);
}