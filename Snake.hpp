#pragma once
#include "Types.hpp"

class Snake
{
public:
	virtual ~Snake() {}
	virtual void moveSnake() = 0;
	virtual void displaySnakesHead() const = 0;



};