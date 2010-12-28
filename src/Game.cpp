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
	sf::RenderWindow Game(sf::VideoMode(1000,600,32), "Game");
	Game.UseVerticalSync(true);
	Game.EnableKeyRepeat(false);
	Player user(300,300);

	const sf::Input& input = Game.GetInput();
	sf::Event event;


	while(Game.IsOpened()){
		user.handle_input(input);
		user.update(Game);
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
