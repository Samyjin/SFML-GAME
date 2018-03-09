#pragma once
#include <SFML\Graphics.hpp>
#include "GameWindow.hpp"

class Game
{
	private:
		bool _isRunning;
		Engine::GameWindow Window;

	public:
		Game();
		~Game();
		void Init();
		void Run();
		void Quit();
		bool IsRunning() const;
};

