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

uint8_t SnakeImpl::getSnakesHead() const
{
	return head;
}

Position SnakeImpl::getPositionOfHead() const
{
	return positionOfHead;
}

Direction SnakeImpl::getDirectionOfMovement() const
{
	return directionOfMovement;
}


