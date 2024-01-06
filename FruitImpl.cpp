#include "FruitImpl.hpp"
#include <iostream>
#include <random>

uint8_t FruitImpl::getFruit() const
{
	return fruit;
}

Position FruitImpl::generateFruitPosition() const
{
	std::random_device rd;
	std::uniform_int_distribution<uint16_t> dist(1, 24);  //depends on boardSize
	return { dist(rd) ,dist(rd) };
}

Position FruitImpl::getFruitPosition() const
{
	return fruitPosition;
}

void FruitImpl::setFruitPosition(Position newFruitPosition)
{
	fruitPosition = newFruitPosition;
}
