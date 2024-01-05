#include "FruitImpl.hpp"
#include <iostream>
#include <random>

void FruitImpl::displayFruit() const
{
	std::cout << "F";
}

Position FruitImpl::generateFruitPosition() const
{
	std::random_device rd;
	std::uniform_int_distribution<uint16_t> dist(1, 10);  //depends on boardSize
	return { dist(rd) ,dist(rd) };
}
