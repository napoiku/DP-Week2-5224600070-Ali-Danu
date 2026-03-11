#pragma once
#include "IScoringRule.h"

class SimpleScoring : public IScoringRule {
    public:
        int calculateScore(int input) override {
            return input;
        }
};