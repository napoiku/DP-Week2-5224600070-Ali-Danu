#pragma once
#include <IRewardSystem.h>

class SimpleReward : public IRewardSystem {
public:
    int calculateMoneyReward(bool isWin, int round) override {
        if (!isWin) return 0;
        return 10 + (round * 5);
    }
};