#include <iostream>
#include <ctime>
#include "RunSession.h"
#include "RandomInputGenerator.h"
#include "SimpleScoring.h"
#include "SimpleReward.h"
#include "ShopSystem.h"

int main() {
    srand(time(0));
    IInputGenerator* myGen = new RandomInputGenerator();
    IScoringRule* myScore = new SimpleScoring();
    IRewardRule* myReward = new SimpleReward();
    ShopSystem* myShop = new ShopSystem();

    RunSession session(myGen, myScore, myReward, myShop);

    session.runGame();

    // Buffer
    int a;
    std::cin >> a ;
    
    return 0;
}