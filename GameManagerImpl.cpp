#include "GameManagerImpl.hpp"

void GameManagerImpl::play()
{
    int gameOver{ 0 }; //temporary Variable to test the code

    while (gameOver != 20)
    {
        system("cls"); //shouldn't be used, but there's no other option for now
        board.displayBoard();
        gameOver++;
        std::this_thread::sleep_for(200ms);
    }
}
