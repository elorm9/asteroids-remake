/*
 * Player.h
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "Ship.h"
class Player : public Ship {

int maxHP;
float move;
int maxSpeed;

float dx;
float dy;
int dA;
public:
	Player();
	Player(int x, int y);
	virtual ~Player();

	int getMaxHP();
	void handle_input(const sf::Input &key);
	void update();
};

#endif /* PLAYER_H_ */
