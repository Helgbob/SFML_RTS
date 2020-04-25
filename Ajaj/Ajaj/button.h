#pragma once
#include <SFML/Graphics.hpp>

class button
{
public:
	button(sf::Texture& texture, sf::Vector2f position, char* text, sf::Font font);
	button(sf::Texture& texture, sf::Vector2f position, char* text);

	bool isClicked();
	void draw(sf::RenderWindow& window);

private:
	sf::Sprite sprt;
	sf::Text text;
};

