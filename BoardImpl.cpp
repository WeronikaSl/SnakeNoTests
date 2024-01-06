#include "BoardImpl.hpp"
#include <iostream>
#include <array>
#include <iterator>


void BoardImpl::displayBoard() //FIX SPAGHETTI CODE IN THIS METHOD
{
	constexpr uint16_t numberOfRows{ 10 };
	constexpr uint16_t numberOfColumns{ 40 };
	std::array<std::array<BoardComponent, numberOfColumns>, numberOfRows> board{}; //{} initializes the array with zeros as default. Can it be a classs member?

	Position fruitPosition = fruit.generateFruitPosition();
	Direction currentSnakesMovementDirection = snake.getDirectionOfMovement();
	Direction direction = userInteractionhandler.convertUserInputToDirection(currentSnakesMovementDirection);
	Position snakesHeadPosition = snake.getPositionOfHead();
	snake.moveSnake(direction);

	constexpr std::array<BoardComponent, 2> boardComponents{ 'x', ' ' };

	displayHorizontalFramePart(numberOfColumns);

	std::cout << std::endl;


		for (int i{ 0 }; i < numberOfRows; i++)
		{

			for (int k{ 0 }; k < numberOfColumns; k++)
			{

				if ((k == 0) || (k == (numberOfColumns - 1)))
				{
					displayBoardComponent(board, i, k, boardComponents[0]);
				}
				else if (i == fruitPosition[0] && k == fruitPosition[1])
				{
					displayBoardComponent(board, i, k, fruit.getFruit()); //sometimes doesn't display - why?
				}
				else if (i == snakesHeadPosition[0] && k == snakesHeadPosition[1])
				{
					displayBoardComponent(board, i, k, snake.getSnakesHead());
				}
				else
				{
					displayBoardComponent(board, i, k, boardComponents[1]);
				}
			}
			std::cout << std::endl;
		}

	displayHorizontalFramePart(numberOfColumns);
}

void BoardImpl::displayHorizontalFramePart(uint16_t numberOfColumns) const
{
	constexpr BoardComponent frameComponent{ 'x' };
	for (uint16_t i{ 0 }; i < numberOfColumns; i++)
	{
		std::cout << frameComponent;
	}
}

void BoardImpl::displayBoardComponent(std::array<std::array<BoardComponent, 40>, 10>& board, uint16_t rowNumber, uint16_t columnNumber, uint8_t boardComponent) const
{
	board[rowNumber][columnNumber] = boardComponent;
	std::cout << board[rowNumber][columnNumber];
}

