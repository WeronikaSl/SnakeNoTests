#include "BoardImpl.hpp"
#include <iostream>
#include <array>


void BoardImpl::displayBoard(FruitImpl& fruit) //FIX SPAGHETTI CODE IN THIS METHOD
{
	constexpr uint16_t numberOfRows{ 25 };
	constexpr uint16_t numberOfColumns{ 30 };
	std::array<std::array<BoardComponent, numberOfColumns>, numberOfRows> board{}; //{} initializes the array with zeros as default. Can it be a classs member? because now it gets created every time method gets called

	Direction currentSnakesMovementDirection = snake.getDirectionOfMovement();
	Direction direction = userInteractionhandler.convertUserInputToDirection(currentSnakesMovementDirection);
	Position snakesHeadPosition = snake.getPositionOfHead();
	snake.moveSnake(direction);


	constexpr std::array<BoardComponent, 2> boardComponents{ 'x', ' ' };

	displayHorizontalFramePart(numberOfColumns);

	std::cout << std::endl;


		for (int i{ 0 }; i < numberOfRows; i++) //can I use ranged based foor loop here somehow?
		{

			for (int k{ 0 }; k < numberOfColumns; k++)
			{

				if (snakesHeadPosition == fruit.getFruitPosition())
				{
					fruit.setFruitPosition(fruit.generateFruitPosition());
				}

				if ((k == 0) || (k == (numberOfColumns - 1))) //-1 because starts with 0, not with 1
				{
					displayBoardComponent(board, i, k, boardComponents[0]);
				}
				else if (i == snakesHeadPosition[0] && k == snakesHeadPosition[1])
				{
					displayBoardComponent(board, i, k, snake.getSnakesHead());


				}
				else if (i == fruit.getFruitPosition()[0] && k == fruit.getFruitPosition()[1])
				{
					displayBoardComponent(board, i, k, fruit.getFruit());
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

void BoardImpl::displayBoardComponent(std::array<std::array<BoardComponent, 30>, 25>& board, uint16_t rowNumber, uint16_t columnNumber, uint8_t boardComponent) const
{
	board[rowNumber][columnNumber] = boardComponent;
	std::cout << board[rowNumber][columnNumber];
}

