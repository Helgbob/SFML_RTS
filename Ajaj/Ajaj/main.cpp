#include <SFML/Graphics.hpp>
#include "button.h"



int main()
{
    system("dir");

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::Texture testTexture;
    if (!testTexture.loadFromFile("jej.png"))
    {
        return -1;
    }
    //button play(testTexture, sf::Vector2f(10,10),(char*)"ahoooj");

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

    return 0;
}
