#pragma once
#include "Fruit.hpp"

class FruitImpl : public Fruit
{
public:
	void displayFruit() const override;
	Position generateFruitPosition() const;

private:
	Position fruitPosition; //is it needed?


};