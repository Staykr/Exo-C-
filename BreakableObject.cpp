#include "BreakableObject.h"
#include "Entity.h"
#include "Alive.h"
#include <iostream>

BreakableObject::BreakableObject(float _x, float _y, float _maxHealth, float _currentHealth) : Entity(_x, _y), Alive(_maxHealth, _currentHealth) {
	std::cout << "Breakable object just created at x: " << position.GetX() << "and y: " << position.GetY() << "with " << maxHealth << " pv." << std::endl;
};

void BreakableObject::TakeDamage(float _damage) {
	void TakeDamage(float _damage);
	std::cout << "Breakable object just broke" << std::endl;
}
