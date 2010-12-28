/*
 * Ship.cpp
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#include "Ship.h"

Ship::Ship() {

}

Ship::Ship(int x, int y){
	entity.getSprite().SetPosition(x,y);
}
Ship::~Ship() {
	// TODO Auto-generated destructor stub
}

int Ship::getHP(){
	return hp;
}

Entity & Ship::getEntity(){
	return entity;
}

void Ship::fireLaser(){

}

void Ship::fireMissile(){

}
