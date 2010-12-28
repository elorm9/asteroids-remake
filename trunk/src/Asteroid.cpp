/*
 * Asteroid.cpp
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#include "Asteroid.h"

Asteroid::Asteroid() {

}

Asteroid::Asteroid(int x, int y){
	entity.getSprite().SetPosition(x,y);
}

Asteroid::~Asteroid() {

}

Entity & Asteroid::getEntity(){
	return entity;
}
