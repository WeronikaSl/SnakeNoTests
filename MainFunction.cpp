#include <iostream>
#include <thread> 
#include "BoardImpl.hpp"

using namespace std::chrono_literals;


int main()
{
    BoardImpl boardImpl;

    int gameOver{ 0 }; //temporary Variable to test the code

    while (gameOver != 100)
    {
        system("cls"); //not safe to use, but there's no other option
        boardImpl.displayBoard();
        gameOver++;
        std::this_thread::sleep_for(500ms); 
    }

}
