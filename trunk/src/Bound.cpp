/*
 * Bound.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */
#include "Bound.h"

int Bound::distance(int x1, int y1, int x2, int y2 ){
	return sqrt( pow(x2 - x1, 2) + pow(y2-y1, 2) );
}


void Bound::setR(int s){
	r = s;
}

int Bound::getR(){
	return r;
}

bool Bound::check_collision(sf::Vector2f & loc1, Bound& b2, sf::Vector2f & loc2){

	if( distance( loc1.x, loc1.y, loc2.x, loc2.y) < (r + b2.getR()))
		return true;
	else
		return false;
}

