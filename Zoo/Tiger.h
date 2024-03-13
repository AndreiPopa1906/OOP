#pragma once
#include "Feline.h"
class Tiger : public Feline
{
public:
	string GetName() { return "Tiger"; }
	bool IsAFish() { return 0; }
	bool IsABird() { return 0; }
	bool IsAMammal() { return 1; }
	int GetSpeed() { return 60; }
};
