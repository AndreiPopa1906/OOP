#pragma once
#include "Animal.h"
#include "Feline.h"
#include <vector>
class Zoo
{
	vector<Animal*> animals;
public:
	vector<Animal*> GetFishes()
	{
		vector<Animal*> v;
		for(auto it : animals)
		{
			if (it->IsAFish() == 1)
			{
				v.push_back(it);
			}
		}
		return v;
	}
	vector<Animal*> GetBirds()
	{
		vector<Animal*> v;
		for (auto it : animals)
		{
			if (it->IsABird() == 1)
			{
				v.push_back(it);
			}
		}
		return v;
	}
	vector<Animal*> GetMammals()
	{
		vector<Animal*> v;
		for (auto it : animals)
		{
			if (it->IsAMammal() == 1)
			{
				v.push_back(it);
			}
		}
		return v;
	}
	vector<Feline*> GetFelines()
	{
		vector<Feline*> feline;

		for (auto animal : animals)
		{
			if (dynamic_cast<Feline*>(animal) != nullptr)
			{
				feline.push_back(dynamic_cast<Feline*>(animal));
			}
		}

		return feline;
	}
	int GetTotalAnimals()
	{
		return animals.size();
	}
	void operator+=(Animal* a)
	{
		animals.push_back(a);
	}
	bool operator()(string name)
	{
		for (auto it : animals)
			if (it->GetName() == name)
				return 1;
		return 0;
	}
};
