#include "SnakeImpl.hpp"
#include <iostream>

void SnakeImpl::moveSnake()
{
	positionOfHead[1]++; //only moves to the right for now. Has to change depending on users imput
}

void SnakeImpl::displaySnakesHead() const
{
	std::cout << "8";
}

Position SnakeImpl::getPositionOfHead() const
{
	return positionOfHead;
}
