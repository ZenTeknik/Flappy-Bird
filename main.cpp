#include <SFML/Graphics.hpp>
#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000

int main() {
    // Rendering the window  with sf(using SFML)  here (awesome SFML) represent  the new opening window name   
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Flappy  Bird");

    // loop while window is open 
    while (window.isOpen()) 
        // Handle events
       
               
        

        // Update game logic (currently empty)

        // Clear the window
        window.clear();
        
        // Draw SFML objects (currently none) 
        


        // Display what was drawn
       window.display();
    

    return 0;
}
