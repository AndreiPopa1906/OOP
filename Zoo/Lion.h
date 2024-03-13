#pragma once
#include "Feline.h"
class Lion : public Feline
{
public:
	string GetName() { return "Lion"; }
	bool IsAFish() { return 0; }
	bool IsABird() { return 0; }
	bool IsAMammal() { return 1; }
	int GetSpeed() { return 70;  }
};