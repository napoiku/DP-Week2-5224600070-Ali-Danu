#pragma once
#include <vector>
#include "IScoringSystem.h"
#include "IRewardSystem.h"
#include "IGenerateHand.h"
#include "SelectBlind.h"
#include "ShopSystem.h"
#include "IModifier.h"

class RunSession {
private:
    int money;
    int currentRound;
    IScoringSystem* scoring;
    IRewardSystem* reward;
    IGenerateHand* generator;
    SelectBlind blindSelector;
    ShopSystem shop;
    std::vector<IModifier*> inventory;

public:
    RunSession(IScoringSystem* s, IRewardSystem* r, IGenerateHand* g);
    ~RunSession();
    void startRun();

private:
    void processRound();
};