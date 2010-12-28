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





};

#endif /* ENTITY_H_ */
