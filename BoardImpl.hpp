#pragma once
#include <memory>
#include "Board.hpp"
#include "FruitImpl.hpp"
#include "SnakeImpl.hpp"
#include "UserInteractionHandlerImpl.hpp"

class BoardImpl : public Board
{
public:
	void displayBoard() override;


private:
	FruitImpl fruit;
	SnakeImpl snake;
	UserInteractionHandlerImpl userInteractionhandler;
	



};