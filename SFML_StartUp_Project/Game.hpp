#pragma once
#include <SFML\Graphics.hpp>
#include "GameWindow.hpp"

class Game
{
	private:
		bool _isRunning;
		Engine::GameWindow Window;
		sf::Clock _clock;

	public:
		Game();
		~Game();
		void Init();
		void Update(sf::Time elapsedTime);
		void Run();
		void Quit();
		bool IsRunning() const;
};

