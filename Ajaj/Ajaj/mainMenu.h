#pragma once
#include <SFML/Graphics.hpp>

class mainMenu
{
public:
	mainMenu(sf::RenderWindow& window);

	void update();
	void draw();

private:
	sf::RenderWindow win;
};

