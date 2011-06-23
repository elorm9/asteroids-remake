/*
 * Asteroid1.h
 *
 *  Created on: Dec 28, 2010
 *      Author: bryan
 */

#ifndef ASTEROID1_H_
#define ASTEROID1_H_
#include "Entity.h"
#include <SFML/Graphics.hpp>

class Asteroid1 {

	Entity entity;
	int HP;
	int speed;
	//sf::Vector2 direction;

public:
	Asteroid1();
	virtual ~Asteroid1();

	int getSpeed();
	int getHP();
	void reduceHP(int reduce);

};

#endif /* ASTEROID1_H_ */
