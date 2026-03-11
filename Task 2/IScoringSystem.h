#pragma once
#include <vector>
#include <string>

class IScoringSystem {
public:
    virtual ~IScoringSystem() {}
    virtual int calculateScore(const std::vector<std::string>& chosenCards) = 0;
};