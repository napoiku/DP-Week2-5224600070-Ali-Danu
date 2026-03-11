#pragma once

class IRewardRule {
public:
    virtual ~IRewardRule() {}
    virtual int calculateReward(int score, int round) = 0; // Rumus uang
};