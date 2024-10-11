#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Player : public Entity, public Alive, public AMovable
{
public: Player(float _x, float _y, float _maxHealth, float _currentHealth, Vector2 _direction, float _speed);

	  virtual void TakeDamage(float _damage) override;
	  virtual void Movement(float _movement) override;
};

#endif
