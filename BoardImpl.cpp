#include "BoardImpl.hpp"
#include <iostream>
#include <array>
#include <algorithm>


void BoardImpl::displayBoard(Position snakesHeadPosition, Position fruitsPosition, SnakeImpl tempSnake) //FIX SPAGHETTI CODE IN THIS METHOD
{
	constexpr std::array<BoardComponent, 2> boardComponents{ 'x', ' ' };

	displayHorizontalFramePart(boardComponents[0]); //doesnt put x in array board

	std::cout << std::endl;


	for (uint16_t i{ 0 }; i < numberOfRows; i++) //can I use ranged based foor loop here somehow? //why i here is 1?
	{
		for (uint16_t k{ 0 }; k < numberOfColumns; k++)
		{
			if ((k == 0) || (k == (numberOfColumns - 1))) //-1 because starts with 0, not with 1
			{
				displayBoardComponent(i, k, boardComponents[0]);
			}
			else if (i == snakesHeadPosition[0] && k == snakesHeadPosition[1])
			{
				displayBoardComponent(i, k, snake.getSnakesHead());
			}
			//else if (i == tempSnake.getTail().tailPositions[0][0] && k == tempSnake.getTail().tailPositions[0][1])
			//{
			//	std::cout << tempSnake.getTail().tailComponent;
			//}
			else if (i == fruitsPosition[0] && k == fruitsPosition[1])
			{
				displayBoardComponent(i, k, fruit.getFruit());
			}
			else
			{
				//Position pos{ i,k };
				//auto beginningOfVec = tempSnake.getTail().tailPositions.begin();
				//auto endOfVec = tempSnake.getTail().tailPositions.end();
				//std::cout << "trace1";

				//auto isValue = std::find(beginningOfVec, endOfVec, pos);
				//std::cout << "trace2";
				//if (isValue != endOfVec) //use creating variable in if statement (cpp17)
				//{
				//	std::cout << "trace3";
				//	displayBoardComponent(i, k, tempSnake.getTail().tailComponent);
				//	std::cout << "trace4";
				//}
				//else
				//{
				//	std::cout << "trace5";
				//	displayBoardComponent(i, k, boardComponents[1]);
				//}
				bool wasPrinted{ 0 };
				for (Position position : tempSnake.getTail().tailPositions)  //USE STD::FIND INSTEAD
				{
					if (position[0] == i && position[1] == k)
					{
						displayBoardComponent(i, k, tempSnake.getTail().tailComponent);
						wasPrinted = true;
					}
				}
				if (!wasPrinted)
				{
					displayBoardComponent(i, k, boardComponents[1]);
				}
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

