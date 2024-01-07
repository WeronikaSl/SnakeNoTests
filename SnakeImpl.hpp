#pragma once
#include "Snake.hpp"
#include <vector>

class SnakeImpl : public Snake
{
public:
	struct Tail
	{
		std::vector<Position> tailPositions{ {4,5} }; //first element is beggining of the tail //dummy values, will be changed later
		//Position beginningOfTail; //has to follow snakes head //DELETE
		Length lengthOfTail{ 1 }; //dummy values, will be changed later
		uint8_t tailComponent{ 'o' };
	};
	void moveSnake(Direction);
	uint8_t getSnakesHead() const;
	Position getPositionOfHead() const;
	Direction getDirectionOfMovement() const;
	Tail getTail();
	void growTail();

private:
	Position positionOfHead{ 5,5 }; //dummy values, will be changed later //is it used?
	Tail tail; 
	Direction directionOfMovement{ Direction::DOWN };
	uint8_t head{ '8' };
	void setTailPositions();
};