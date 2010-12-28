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
	move = 0;
}

Player::Player(int x, int y):Ship(x,y){
	maxHP = 100;
	move = 0;
	dA = 0;
	maxSpeed = 4;
	getEntity().setSprite("src/Images/ship1.png");
}

Player::~Player() {

}

int Player::getMaxHP(){
	return maxHP;
}

void Player::handle_input(const sf::Input &key) {

//--------------rotation keys----------------
//if left or right arrow keys are pressed
	if(key.IsKeyDown(sf::Key::Left) || key.IsKeyDown(sf::Key::Right)){

		//if left key is pressed, rotate ship left
		if(key.IsKeyDown(sf::Key::Left)){
			dA = 5;
		}

		//otherwise rotate right
		else{
			dA = -5;
		}
	}

	else
	{
		dA = 0;
	}


//-------------move keys----------------
	if(key.IsKeyDown(sf::Key::Up) || key.IsKeyDown(sf::Key::Down)){

		if(key.IsKeyDown(sf::Key::Up)){
//			if(move > 0){
//				move -= .4;
//			}
//			else
			if(move > -maxSpeed)
				move -= .5;
			//getEntity().getSprite().Move(dx , dy);
		}

		else
		{
//			if(move < 0){
//				move = 0;
//			}

			if(move < maxSpeed)
				move += .5;
			//getEntity().getSprite().Move(dx, dy);
		}
	}
	else
	{
		move = 0;
	}


//---------------weapons---------------------
	if(key.IsKeyDown(sf::Key::A))
		fireMissile();

	else
	if(key.IsKeyDown(sf::Key::S))
		fireLaser();

	dx = move*cos((90-getEntity().getSprite().GetRotation() )*M_PI/180);
	dy = move*sin((90-getEntity().getSprite().GetRotation() )*M_PI/180);

}

void Player::update(){
	getEntity().getSprite().Move(dx, dy);
	getEntity().getSprite().Rotate(dA);
}
