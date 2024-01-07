#include "GameManagerImpl.hpp"

void GameManagerImpl::play()
{
    int gameOver{ 0 }; //temporary Variable to test the code
    Position newSnakesHeadPosition{ 5,5 }; //random values to start the game
    Position newFruitPosition{ 5,6 }; //random values to start the game

    while (gameOver != 200)
    {
        system("cls"); //shouldn't be used, but there's no other option for now
        newSnakesHeadPosition = convertUserImputToSnakesMovement();
        newFruitPosition = eatTheFruit(newSnakesHeadPosition);
        board.displayBoard(newSnakesHeadPosition, newFruitPosition, snake);
        gameOver++;
        std::this_thread::sleep_for(400ms);
    }
}

Position GameManagerImpl::convertUserImputToSnakesMovement()
{
    Direction currentSnakesMovementDirection = snake.getDirectionOfMovement();
    Direction newDirection = userInteractionHandler.convertUserInputToDirection(currentSnakesMovementDirection);
    snake.moveSnake(newDirection);
    return snake.getPositionOfHead();
}

Position GameManagerImpl::eatTheFruit(Position snakesHeadPosition)
{
    if (snakesHeadPosition == fruit.getFruitPosition())
    {
        fruit.setFruitPosition(fruit.generateFruitPosition());
        snake.growTail(); //is there another way to do it?

    }
    return fruit.getFruitPosition();
}
