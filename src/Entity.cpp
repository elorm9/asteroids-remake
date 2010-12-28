/*
 * Entity.cpp
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#include "Entity.h"

Entity::Entity(){

}

Entity::~Entity(){

}


Bound& Entity::getBound(){
	return bound;
}

sf::Sprite& Entity::getSprite(){
	return sprite;
}

void Entity::setVisibility(bool b){
	visible = b;
}

bool Entity::isVisible(){
	return visible;
}
