#include <SFML/Graphics.hpp>
#include <SFML/Main.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>

const float PLAYER_HEIGHT = 32.0f;
const float PLAYER_WIDTH = 32.0f;
const float PLAYER_START_X = 0.0f;
const float PLAYER_START_Y = 0.0f;

const float TILE_SIZE_X = 32.0f;
const float TILE_SIZE_Y = 32.0f;

int main() 
{
	// Instantiate the player graphic.  For now, it is just a magenta square located in
	// the top left of the window.
	sf::RectangleShape player(sf::Vector2f(PLAYER_HEIGHT, PLAYER_WIDTH));
	player.setPosition(sf::Vector2f(PLAYER_START_X, PLAYER_START_Y));
	player.setFillColor(sf::Color::Magenta);
	
	const char* WINDOW_TITLE = "Game 1";

	sf::RenderWindow window(sf::VideoMode(800, 600), WINDOW_TITLE);

	while (window.isOpen())
    {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			if (event.type == sf::Event::KeyPressed)
			{

			}
		}

		window.clear(sf::Color::Black);
		window.draw(player);
		window.display();
	}

	return 0;
}