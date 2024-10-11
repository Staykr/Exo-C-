#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
	public: BreakableObject(float _x, float _y, float _maxHealth, float _currentHealth);

	virtual void TakeDamage(float _damage) override;
};

#endif

