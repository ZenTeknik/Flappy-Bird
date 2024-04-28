#include<iostream>
#include"Game.hpp"
// we extract all the functionality from the main into differnet section accordingly like state ,engine etc
int main() {

	Sonar::Game(800, 600, "Flappy Bird ");
	return EXIT_SUCCESS;
} 