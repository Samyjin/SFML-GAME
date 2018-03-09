#pragma once
#include <SFML\Graphics.hpp>

namespace Engine
{
	/// GameWindow class handle everything related to the game window.
	class GameWindow
	{
		public:
			GameWindow();
			GameWindow(std::string title, int width, int height);
			GameWindow(int width, int height);
			~GameWindow();

			int GetWidth() const;
			int GetHeight() const;
			sf::RenderWindow &GetRenderWindow();
			std::string const &GetWindowTitle() const;

		private:
			sf::RenderWindow _renderWindow;
			std::string _title;
			int _width;
			int _height;

	
	};
}