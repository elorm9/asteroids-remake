/*
 * Game.cpp
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace std;

int main() {
	sf::RenderWindow Game(sf::VideoMode(800,600,32), "Game");
	Game.UseVerticalSync(true);
	Player user(300,300);

	sf::Event event;


	while(Game.IsOpened()){
		user.handle_input(Game);
		Game.Clear(sf::Color(0, 0, 0, 0));
		Game.Draw(user.getEntity().getSprite());
		Game.Display();

		while(Game.GetEvent(event)){
			if(event.Type == sf::Event::Closed)
				Game.Close();

		}
	}
	return 0;
}
