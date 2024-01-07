#pragma once
#include "Board.hpp"
#include "SnakeImpl.hpp"


class BoardImpl : public Board
{
public:
	void displayBoard(Position, Position, SnakeImpl, bool&) override;
	bool checkIfSnakeHitsTheFrame() const;
private:
	static constexpr uint16_t numberOfRows{ 25 }; //can it be static?
	static constexpr uint16_t numberOfColumns{ 30 }; //can it be static?
	std::array<std::array<BoardComponent, numberOfColumns>, numberOfRows> board{};  //{} initializes the array with zeros as default
	SnakeImpl snake; //is it needed?
	FruitImpl fruit; //is it needed?
	void displayHorizontalFramePart(uint8_t, bool&, Position) const;
	void displayBoardComponent(uint16_t, uint16_t, uint8_t);
};