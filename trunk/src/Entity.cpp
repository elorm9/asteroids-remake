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

void Entity::setDX(float d){
	dx = d;
}

void Entity::setDY(float d){
	dy = d;
}

void Entity::setSprite(std::string str){
	image.LoadFromFile(str);
	image.SetSmooth(false);
	sprite.SetImage(image);
}

