/*
 * Projectile.h
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#ifndef PROJECTILE_H_
#define PROJECTILE_H_
#include "Entity.h"
class Projectile {

	Entity entity;
	int damage;

public:
	Projectile();
	Projectile(int x, int y);

	virtual ~Projectile();

	Entity &getEntity();
	int getDamage();
	void setDamage(int d);
};

#endif /* PROJECTILE_H_ */
