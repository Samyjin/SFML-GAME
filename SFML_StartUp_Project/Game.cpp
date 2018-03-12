#include <iostream>
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
	sf::Sprite sprite;
	sf::Texture texture;

	if (!texture.loadFromFile("sprite.bmp"))
		std::cerr << "Cannot load texture : sprite.png" << std::endl;

	sprite.setTexture(texture);

	while (window.isOpen())
	{

		sf::Time elapsed = _clock.getElapsedTime();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		window.clear();
		window.draw(sprite);
		window.display();
	}
}

void Game::Update(sf::Time elapsedTime)
{

}

