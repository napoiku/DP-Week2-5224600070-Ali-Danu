#pragma once
#include <IGenerateHand.h>
#include <iostream>

class SimpleGenerate : IGenerateHand {
    public:
        int generate () override {
            std::cout << "[SYSTEM] Generate Hand: 5\n";
            return 5;
        }
};