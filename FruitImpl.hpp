#pragma once
#include "Fruit.hpp"

class FruitImpl : public Fruit
{
public:
	uint8_t getFruit() const override;
	Position generateFruitPosition() const;

private:
	uint8_t fruit{ 'F' };
	Position fruitPosition; //is it needed?


};