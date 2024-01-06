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
	std::uniform_int_distribution<uint16_t> dist(3, 20);  //depends on boardSize
	return { dist(rd) ,dist(rd) };
}
