#pragma once
#include "GameManager.hpp"
#include "UserInteractionHandlerImpl.hpp"
#include "BoardImpl.hpp"
#include <thread> 

using namespace std::chrono_literals;

class GameManagerImpl : public GameManager //change to Singleton
{
public:
	void play() override;
private:
	UserInteractionHandlerImpl userInteractionHandler;
	BoardImpl board;
	FruitImpl fruit;
	Position fruitPosition{ 5,6 }; //change to FruitImpl

};