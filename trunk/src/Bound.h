/*
 * Bound.h
 *
 *  Created on: Jun 23, 2010
 *      Author: bryan
 */

#ifndef BOUND_H_
#define BOUND_H_
#include <cmath>
#include <SFML/Graphics.hpp>

//This is a class for a circle bound
class Bound{
private:
	int r;

	int distance(int x1, int y1, int x2, int y2);

public:
	Bound(){
		r = 0;
	}

	~Bound(){

	}

	void setR(int s);

	//get the radius
	int getR();

	//checks for a collision with another entity's bound
	//loc1 is the location of one entity
	//loc2 and b2 are variables of another entity
	bool check_collision(sf::Vector2f & loc1, Bound& b2, sf::Vector2f & loc2);


};

#endif /* BOUND_H_ */
