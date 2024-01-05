#include "SnakeImpl.hpp"
#include <iostream>

void SnakeImpl::moveSnake(Direction direction)
{
	directionOfMovement = direction;
	switch (direction)
	{
	case Direction::UP:
		positionOfHead[0]--;
		break;
	case Direction::DOWN:
		positionOfHead[0]++;
		break;
	case Direction::LEFT:
		positionOfHead[1]--;
		break;
	case Direction::RIGHT:
		positionOfHead[1]++;
		break;
	default:
		break;
	}
}

void SnakeImpl::displaySnakesHead() const
{
	std::cout << "8";
}

Position SnakeImpl::getPositionOfHead() const
{
	return positionOfHead;
}

Direction SnakeImpl::getDirectionOfMovement() const
{
	return directionOfMovement;
}


