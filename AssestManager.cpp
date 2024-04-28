#include"AssestManager.hpp"

namespace Sonar {
	// assest for the texture 
	void AssestManager::LoadTexture(std::string name, std::string filename) 
		sf::Texture tex; {


		if (tex.loadFormFile(filename)) { 
			this->_Textures[name] = tex;

		}
	}
	
		sf::Texture& AssestManager::GetTexture(std::string name) {
			return this->_texture.at(name);

		}
		 // assest for the fonts 
		void AssestManager::LoadFont (std::string name, std::string filename)
			sf::Font font; {


			if (font.loadFormFile(filename)) {
				this->_fonts[name] = font;

			}
		}

		sf:: Font & AssestManager::GetFont(std::string name) {
			return this->_fonts.at(name);

		}

	}