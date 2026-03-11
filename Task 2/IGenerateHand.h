#pragma once

class IGenerateHand {
    public:
        virtual ~IGenerateHand() {}
        virtual int generate() = 0;
};