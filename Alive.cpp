#include"Alive.h"

Alive::Alive(float _maxHealth, float _currentHealth) : maxHealth(_maxHealth), currentHealth(_currentHealth) {

}

float Alive::GetMaxHealt(float _MaxHealth) {
	return _MaxHealth;
}

float Alive::GetCurrentHealt(float _CurrentHealth) {
	return _CurrentHealth;
}

void Alive::TakeDamage(float _damage) {
	currentHealth =- _damage;
};
