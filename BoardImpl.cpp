#include "BoardImpl.hpp"
#include <iostream>

void BoardImpl::displayBoard() const
{
	int height{10}; //change to one var
	int length{40};
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
			else if (i == 5 && k == 5) //dummy values to make it work, will be changed to randomly generated number later
			{
				fruitImpl.displayFruit();
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
