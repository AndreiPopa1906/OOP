#pragma once
#include "Animal.h"
class Feline : public Animal
{
public:
	virtual string GetName() = 0;
	virtual bool IsAFish() = 0;
	virtual bool IsABird() = 0;
	virtual bool IsAMammal() = 0;
	virtual int GetSpeed() = 0;
};