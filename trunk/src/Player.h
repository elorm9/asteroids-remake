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
int angle;
int move;

public:
	Player();
	Player(int x, int y);
	virtual ~Player();

	int getMaxHP();
	void handle_input(sf::Event event);
};

#endif /* PLAYER_H_ */
