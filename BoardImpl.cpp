#include "BoardImpl.hpp"
#include <iostream>
#include <array>


void BoardImpl::displayBoard(Position snakesHeadPosition, Position fruitsPosition) //FIX SPAGHETTI CODE IN THIS METHOD
{
	constexpr std::array<BoardComponent, 2> boardComponents{ 'x', ' ' };

	displayHorizontalFramePart(boardComponents[0]);

	std::cout << std::endl;

		for (int i{ 0 }; i < numberOfRows; i++) //can I use ranged based foor loop here somehow?
		{
			for (int k{ 0 }; k < numberOfColumns; k++)
			{
				if ((k == 0) || (k == (numberOfColumns - 1))) //-1 because starts with 0, not with 1
				{
					displayBoardComponent(i, k, boardComponents[0]);
				}
				else if (i == snakesHeadPosition[0] && k == snakesHeadPosition[1])
				{
					displayBoardComponent(i, k, snake.getSnakesHead());
				}
				else if (i == fruitsPosition[0] && k == fruitsPosition[1])
				{
					displayBoardComponent(i, k, fruit.getFruit());
				}
				else
				{
					displayBoardComponent(i, k, boardComponents[1]);
				}
			}
			std::cout << std::endl;
		}

	displayHorizontalFramePart(boardComponents[0]);
}

void BoardImpl::displayHorizontalFramePart(uint8_t boardComponent) const
{
	for (uint16_t i{ 0 }; i < numberOfColumns; i++)
	{
		std::cout << boardComponent;
	}
}

void BoardImpl::displayBoardComponent(uint16_t rowNumber, uint16_t columnNumber, uint8_t boardComponent)
{
	board[rowNumber][columnNumber] = boardComponent;
	std::cout << board[rowNumber][columnNumber];
}

