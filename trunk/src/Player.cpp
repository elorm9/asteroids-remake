/*
 * Player.cpp
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#include "Player.h"
#include <SFML/Window.hpp>
#include <cmath>
#include <iostream>
Player::Player():Ship() {
	maxHP = 100;
	angle = 0;
	move = 0;
}

Player::Player(int x, int y):Ship(x,y){
	maxHP = 100;
	angle = 90;
	move = 5;
	getEntity().setSprite("src/Images/ship1.png");
}

Player::~Player() {

}

int Player::getMaxHP(){
	return maxHP;
}

void Player::handle_input(sf::Event event){
	//If a key was pressed
	if( event.Type == sf::Event::KeyPressed ){
		//Adjust the velocity

		if(event.Key.Code == sf::Key::Up){
			getEntity().getSprite().Move(-move*cos(angle*M_PI/180), -move*sin(angle*M_PI/180));
		}

		else
		if(event.Key.Code == sf::Key::Down){
			getEntity().getSprite().Move(move*cos(angle*M_PI/180), move*sin(angle*M_PI/180));
		}

		else
		if(event.Key.Code == sf::Key::Left){
			angle -= 10;
			getEntity().getSprite().Rotate(10);
			std::cout << angle << " ";

		}

		else
		if(event.Key.Code == sf::Key::Right){
			angle += 10;
			getEntity().getSprite().Rotate(-10);
		}

	}

	//If a key was released
	else if( event.Type == sf::Event::KeyReleased ) {

		if(event.Key.Code == sf::Key::Up){
			getEntity().getSprite().Move(0,0);
		}

		else
		if(event.Key.Code == sf::Key::Down){
			getEntity().getSprite().Move(0,0);
		}

		else
		if(event.Key.Code == sf::Key::Left)
			getEntity().getSprite().Rotate(0);

		else
		if(event.Key.Code == sf::Key::Right)
		getEntity().getSprite().Rotate(0);

		else
		if(event.Key.Code == sf::Key::A)
			fireMissile();

		else
		if(event.Key.Code == sf::Key::S)
			fireLaser();
	}

}
