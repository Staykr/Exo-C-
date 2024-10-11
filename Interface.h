#pragma once
#include "Alive.h"

class IAattacker {

	public:
		virtual void Attack(Alive*) = 0;
};
