/*
 * Projectile.cpp
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#include "Projectile.h"

Projectile::Projectile() {

}

Projectile::Projectile(int x, int y){
	entity.getSprite().SetPosition(x,y);
}

Projectile::~Projectile() {

}

Entity & Projectile::getEntity() {
	return entity;
}

int Projectile::getDamage() {
	return damage;
}

void Projectile::setDamage(int d) {
	damage = d;
}
