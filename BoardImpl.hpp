#pragma once
#include "Board.hpp"
#include "SnakeImpl.hpp"
#include "UserInteractionHandlerImpl.hpp"

class BoardImpl : public Board
{
public:
	void displayBoard(FruitImpl&) override;
private:
	FruitImpl fruit;
	SnakeImpl snake;
	UserInteractionHandlerImpl userInteractionhandler;
	void displayHorizontalFramePart(uint16_t) const;
	void displayBoardComponent(std::array<std::array<BoardComponent, 30>, 25>&, uint16_t, uint16_t, uint8_t) const; //hardcoded size, how can I improve it?
};