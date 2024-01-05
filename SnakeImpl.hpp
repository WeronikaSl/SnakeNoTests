#pragma once
#include "Snake.hpp"

class SnakeImpl : public Snake
{
public:
	void moveSnake();
	void displaySnakesHead() const;
	Position getPositionOfHead() const;

private:
	struct Tail
	{
		Position beginningOfTail; //has to follow snakes head
		Length lengthOfTail;
	};

	Position positionOfHead{ 5,5 }; //dummy values, will be changed later
	Tail tail{ 4,5,5 }; //dummy values, will be changed later



};