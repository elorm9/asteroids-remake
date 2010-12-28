/*
 * Asteroid.h
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#ifndef ASTEROID_H_
#define ASTEROID_H_
#include "Entity.h"
class Asteroid {
	Entity entity;

public:
	Asteroid();
	Asteroid(int x, int y);
	virtual ~Asteroid();

	Entity & getEntity();

};

#endif /* ASTEROID_H_ */
