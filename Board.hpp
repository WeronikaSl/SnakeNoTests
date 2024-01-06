#pragma once
#include "Types.hpp"
#include "FruitImpl.hpp"

class Board
{
public:
	virtual ~Board(){}
	virtual void displayBoard(FruitImpl&) = 0;


};