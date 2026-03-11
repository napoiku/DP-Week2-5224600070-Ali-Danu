#pragma once
#include "IRewardRule.h"

class SimpleReward : public IRewardRule {
    public:
        int calculateReward(int score, int round) override {
            if(round % 2 == 0) {
                return score * 2;
            } else {
                return score + 2;
            }
        }
};