/*
 * Entity.h
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include "Bound.h"
#include <SFML/Graphics.hpp>

class Entity {
	//dx and dy determine the displacement of the entity in the x and y directions
	float dx;
	float dy;
	Bound bound;
	sf::Image image;
	sf::Sprite sprite;

	//determines whether or not the entity's sprite will be drawn by the program
	bool visible;

public:
	Entity();
	virtual ~Entity();

	Bound &getBound();
	sf::Sprite &getSprite();

	void setVisibility(bool b);
	bool isVisible();

	void setDX(float dx);
	void setDY(float dy);

	void setSprite(std::string str);

};

#endif /* ENTITY_H_ */
