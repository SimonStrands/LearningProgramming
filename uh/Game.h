#pragma once
#include "GameState.h"
#include <SFML/Graphics.hpp>


class Game: public GameState {
private:
	sf::RenderWindow win;
public:
	Game();
	virtual ~Game();
	State Update(float dt);
	void Render();
	void HandleEvents();
};