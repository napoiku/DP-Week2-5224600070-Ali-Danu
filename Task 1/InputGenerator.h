#pragma once
#include "IInputGenerator.h"

class InputGenerator : public IInputGenerator {
    public:
        int generate() override {
            return 2;
        }
    };