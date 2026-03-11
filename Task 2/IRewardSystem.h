#pragma once

class IRewardSystem {
public:
    virtual ~IRewardSystem() {}
    virtual int calculateMoneyReward(bool isWin, int round) = 0;
};