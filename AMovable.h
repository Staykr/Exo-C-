#pragma once
#include "Vector2.h"

class AMovable
{

protected:
	Vector2 direction;
	float speed;


public:
	AMovable(Vector2 _direction, float _speed);

	virtual void SetDirection(Vector2 _direction);
	virtual void SetSpeed(float _speed);
	virtual void Move() = 0;
	

};