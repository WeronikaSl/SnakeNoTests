#pragma once
#include "Types.hpp"

class Fruit
{
public:
	virtual ~Fruit(){}
	virtual void displayFruit() const = 0;
	virtual Position generateFruitPosition() const = 0;


};