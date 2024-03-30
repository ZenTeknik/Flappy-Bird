#include <SFML/Graphics.hpp>
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main() {
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome SFML");

    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update game logic (currently empty)

        // Clear the window
        window.clear();

        // Draw SFML objects (currently none)

        // Display what was drawn
        window.display();
    }

    return 0;
}
