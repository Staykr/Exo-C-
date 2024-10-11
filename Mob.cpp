#include "Mob.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

Mob::Mob(float _x, float _y, float _maxHealth, float _currentHealth, Vector2 _direction, float _speed) : Entity(_x, _y), Alive(_maxHealth, _currentHealth), AMovable(_direction, _speed) {
	std::cout << "Mob just created at x: " << position.GetX() << " and y: " << position.GetY() << " with: " << maxHealth << " pv." << " with: " << direction.GetX() << " and " << direction.GetY() << std::endl;
}

void Mob::TakeDamage(float _damage) {
	void TakeDamage(float _damage);
	std::cout << "Mob just die" << std::endl;
}

void Mob::Movement(float _movement) {
	void Movement(float _movement);
	std::cout << "Mob just move to x: " << direction.GetX() << "to y: " << direction.GetY() << std::endl;
}