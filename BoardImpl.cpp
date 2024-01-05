#include "BoardImpl.hpp"
#include <iostream>


void BoardImpl::displayBoard() //FIX SPAGHETTI CODE IN THIS METHOD
{
	int height{10}; //change to one var?
	int length{40};
	Position fruitPosition = fruit.generateFruitPosition();
	Direction currentSnakesMovementDirection = snake.getDirectionOfMovement();
	Direction direction = userInteractionhandler.convertUserInputToDirection(currentSnakesMovementDirection);
	Position snakesHeadPosition = snake.getPositionOfHead();
	snake.moveSnake(direction);

	for (int i{0}; i < length; i++) //put in one private function, code copied, displayRow()?
	{
		std::cout << "x";
	}

	std::cout << std::endl;


		for (int i{ 0 }; i < height; i++)
		{

			for (int k{ 0 }; k < length; k++)
			{

				if ((k == 0) || (k == (length - 1)))
				{
					std::cout << "x";
				}
				else if (i == fruitPosition[0] && k == fruitPosition[1])
				{
					fruit.displayFruit(); //sometimes doesn't display - why?
				}
				else if (i == snakesHeadPosition[0] && k == snakesHeadPosition[1])
				{

					snake.displaySnakesHead();

				}
				else
				{
					std::cout << " ";
				}


			}

			std::cout << std::endl;


		}

		for (int i{ 0 }; i < length; i++) //put in one private function, code copied
		{
			std::cout << "x";
		}
}
