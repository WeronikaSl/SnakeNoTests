#include "BoardImpl.hpp"
#include <iostream>

void BoardImpl::displayBoard() const
{
	int height{10}; //change to one var?
	int length{40};
	Position fruitPosition = fruitImpl.generateFruitPosition();
	for (int i{0}; i < length; i++) //put in one private function, code copied, displayRow()?
	{
		std::cout << "x";
	}

	std::cout << std::endl;

	for (int i{0}; i < height; i++)
	{
		for (int k{0}; k < length; k++)
		{
			if ((k == 0) || (k == (length - 1)))
			{
				std::cout << "x";
			}
			else if (i == fruitPosition[0] && k == fruitPosition[1])
			{
				fruitImpl.displayFruit(); //sometimes doesn't display - why?
			}
			else
			{
				std::cout << " ";
			}
			
		}
		std::cout << std::endl;

	}


	for (int i{0}; i < length; i++) //put in one private function, code copied
	{
		std::cout << "x";
	}
}
