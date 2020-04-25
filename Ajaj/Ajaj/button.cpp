#include "button.h"

button::button(sf::Texture& texture, sf::Vector2f position, char* text, sf::Font font)
{
	sprt = sf::Sprite(texture);
	sprt.setPosition(position);

	this->text.setFont(font);
	this->text.setString(text);
	this->text.setPosition(position);
}

button::button(sf::Texture& texture, sf::Vector2f position, char* text)
{
	sf::Font font;
	if (!font.loadFromFile("assets/fonts/default-font.ttf"))
	{
		//error
	}
	button::button(texture, position, text, font);
}

bool button::isClicked()
{
	return false;
}

void button::draw(sf::RenderWindow& window)
{
	window.draw(sprt);
	window.draw(text);
}