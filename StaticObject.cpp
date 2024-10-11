#include "StaticObject.h"
#include "Entity.h"
#include <iostream>

StaticObject::StaticObject(float _x, float _y) : Entity( _x, _y){
	std::cout << "Static object just created at x: " << position.GetX() << "and y: " << position.GetY() << std::endl;
};
