#pragma once

#include<map>
#include<SFML/Graphics.hpp>

namespace Sonar {
	class AssestManager {
	public:
	AssestManager(){}

	~AssetManager(){}

	void LoadTexture(std::string name, std::string filename);
	sf::Texture& GetTexture(std::string name);


	void LoadFont(std::string name, std::string filename);
	sf::Font& GetFont(std::string name);

	private:
		std::map<std::string, sf::Texture>_Textures;
		std::map<std::string, sf::Font>_Fonts;



	};
}