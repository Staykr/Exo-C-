#pragma once
class Alive
{

protected:
	float maxHealth;
	float currentHealth;

public:
	Alive(float _maxHealth, float currentHealth);

	virtual float GetMaxHealt(float);
	virtual float GetCurrentHealt(float);
	virtual void TakeDamage(float _damage);
};
