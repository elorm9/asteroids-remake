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
}

Player::Player(int x, int y):Ship(x,y){
	maxHP = 100;
	getEntity().setSprite("src/Images/spaceship.png");
}

Player::~Player() {

}

int Player::getMaxHP(){
	return maxHP;
}

void Player::handle_input(sf::RenderWindow & Game) {

	sf::Sprite &p = getEntity().getSprite();

		//left
		if(p.GetPosition().x < -10){
			p.SetPosition(Game.GetWidth()+10, p.GetPosition().y);
		}

		else
			if(p.GetPosition().x > Game.GetWidth()+10){
				p.SetPosition(1, p.GetPosition().y);
			}


		if(p.GetPosition().y < -10){
			p.SetPosition(p.GetPosition().x, Game.GetHeight());
		}

		else
			if(p.GetPosition().y > Game.GetHeight()+10){
				p.SetPosition(p.GetPosition().x, 0);
			}


//--------------rotation keys----------------
//if left or right arrow keys are pressed
	if (Game.GetInput().IsKeyDown(sf::Key::Left)){
		getEntity().getSprite().Rotate(150 * Game.GetFrameTime() * -1);
	}else if (Game.GetInput().IsKeyDown(sf::Key::Right)) {
		getEntity().getSprite().Rotate(150 * Game.GetFrameTime());
	}

//-------------move keys----------------
	if (Game.GetInput().IsKeyDown(sf::Key::Up)){
		getEntity().getSprite().Move(150 * Game.GetFrameTime() * -1 * sin((getEntity().getSprite().GetRotation() )*M_PI/180)
				, 150 * Game.GetFrameTime() * -1 * cos((getEntity().getSprite().GetRotation() )*M_PI/180));
	}else if (Game.GetInput().IsKeyDown(sf::Key::Down)) {
		getEntity().getSprite().Move(150 * Game.GetFrameTime() * sin((getEntity().getSprite().GetRotation() )*M_PI/180),
				150 * Game.GetFrameTime() * cos((getEntity().getSprite().GetRotation() )*M_PI/180));
	}



//---------------weapons---------------------
	if(Game.GetInput().IsKeyDown(sf::Key::A))
		fireMissile();

	else
	if(Game.GetInput().IsKeyDown(sf::Key::S))
		fireLaser();

}


