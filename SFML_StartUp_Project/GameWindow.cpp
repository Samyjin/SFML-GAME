#include "GameWindow.hpp"

using namespace Engine;

GameWindow::GameWindow(std::string title, int width, int height) :
	_renderWindow(sf::VideoMode(width, height), title),
	_width(width),
	_height(height),
	_title(title)
{
}

GameWindow::GameWindow(int width, int height) :
	_renderWindow(sf::VideoMode(width, height), "My Window"),
	_width(width),
	_height(height)
{
}

GameWindow::GameWindow() : 
	_renderWindow(sf::VideoMode(800, 600), "My Window"),
	_width(800), 
	_height(600)
{

}

GameWindow::~GameWindow()
{

}

int GameWindow::GetHeight() const
{
	return (this->_height);
}

int GameWindow::GetWidth() const
{
	return (this->_width);
}

sf::RenderWindow& GameWindow::GetRenderWindow()
{
	return (this->_renderWindow);
}

std::string const & GameWindow::GetWindowTitle() const
{
	return (this->_title);
}
