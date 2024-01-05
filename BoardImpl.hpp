#pragma once
#include "Board.hpp"

class BoardImpl : public Board
{
public:
	void displayBoard() const override;

private:
	FruitImpl fruitImpl;



};