#pragma once

#include <vector>
#include "IInputGenerator.h"
#include "IScoringRule.h"
#include "IRewardRule.h"
#include "ShopSystem.h"

class RunSession {
private:
    int totalMoney;
    IInputGenerator* inputGen;
    IScoringRule* scoring;
    IRewardRule* reward;
    ShopSystem* shop;

public:
    RunSession(IInputGenerator* ig, IScoringRule* sr, IRewardRule* rr, ShopSystem* ss);
    void runGame(); // Menjalankan loop 3 ronde [cite: 14, 44]
};