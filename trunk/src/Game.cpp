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
	Game.SetFramerateLimit(60);
	Game.UseVerticalSync(true);
	Player user(300,300);

	while(Game.IsOpened()){
		sf::Event event;
		while(Game.GetEvent(event)){
			if(event.Type == sf::Event::Closed)
				Game.Close();

			user.handle_input(event);
		}
		Game.Clear();

		Game.Draw(user.getEntity().getSprite());
		Game.Display();
	}
	return 0;
}
