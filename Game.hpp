#include<memory>
#include<string>
#include<SFML/Graphics.hpp>
#include"stateMachine.hpp"
#include"AssestManager.hpp"
#include"InputManager.hpp"

namespace Sonar
{
    struct GameData
    {
        stateMachine machine;
        sf::RenderWindow window;
        AssestManager assests;
        InputManager input;
    };
    typedef std::shared_ptr<GameData> GameDataRef;

    class Game {
    public:
        Game(int width, int height, std::string title);

    private:
        const float dt = 1.0f / 60.0f;
        sf::Clock _clock;

        GameDataRef _data = std::make_shared<GameData>();

        void Run();
    };
}
