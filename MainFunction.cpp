#include <iostream>
#include "BoardImpl.hpp"

int main()
{
    BoardImpl boardImpl;

    int gameOver{ 0 };

    while (gameOver != 100)
    {
        system("cls"); //not safe to use, but there's no other option
        boardImpl.displayBoard();
        gameOver++;
    }

}
