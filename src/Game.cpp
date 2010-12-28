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

	const sf::Input& input = Game.GetInput();
	sf::Event event;

	while(Game.IsOpened()){

		Game.Clear();

	//	user.getEntity().getSprite().Move(2,-1);
		//user.getEntity().getSprite().Rotate(2);
		while(Game.GetEvent(event)){
			if(event.Type == sf::Event::Closed)
				Game.Close();

			user.handle_input(input);
		}

		user.update();
		Game.Draw(user.getEntity().getSprite());

		Game.Display();
	}
	return 0;
}
