#include "Game.hpp"

Game::Game() : 
	Window(std::string("Game"), 1280, 720),
	_isRunning(false)
{

}


Game::~Game()
{
}

void Game::Run()
{
	sf::RenderWindow &window = Window.GetRenderWindow();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}
}
