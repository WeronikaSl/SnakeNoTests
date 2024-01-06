#pragma once
#include "Snake.hpp"

class SnakeImpl : public Snake
{
public:
	void moveSnake(Direction);
	uint8_t getSnakesHead() const;
	Position getPositionOfHead() const;
	Direction getDirectionOfMovement() const;

private:
	struct Tail
	{
		Position beginningOfTail; //has to follow snakes head
		Length lengthOfTail;
	};

	Position positionOfHead{ 5,5 }; //dummy values, will be changed later //is it used?
	Tail tail{ 4,5,5 }; //dummy values, will be changed later
	Direction directionOfMovement{ Direction::NONE };
	uint8_t head{ '8' };
};