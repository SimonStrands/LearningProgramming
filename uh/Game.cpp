#include "Game.h"
#include <iostream>

using namespace std;

Game::Game():
	win(sf::VideoMode(800, 600), "SFML window")
{
	printf(":D\n");
	cout << "hi" << endl;
}

Game::~Game()
{
}

State Game::Update(float dt)
{
	State state = NO_CHANGE;
	





	if (done)
	{
		state = EXIT;
	}
	return state;
}

void Game::Render()
{
	win.clear();

	win.display();
}

void Game::HandleEvents()
{
	sf::Event event;
	while (win.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			win.close();
			done = true;
		}
	}
}
