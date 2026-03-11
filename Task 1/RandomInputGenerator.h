#pragma once
#include "IInputGenerator.h"
#include <cstdlib>

class RandomInputGenerator : public IInputGenerator {
public:
    int generate() override {
        return (std::rand() % 10) + 1;
    }
};