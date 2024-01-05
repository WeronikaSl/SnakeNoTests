#include <iostream>
#include <thread> 
#include "BoardImpl.hpp"
#include "SnakeImpl.hpp"

using namespace std::chrono_literals;


int main()
{
    BoardImpl board;

    int gameOver{ 0 }; //temporary Variable to test the code

    while (gameOver != 100)
    {
        system("cls"); //not safe to use, but there's no other option
        board.displayBoard();
        gameOver++;
        std::this_thread::sleep_for(50ms); 
    }

}
