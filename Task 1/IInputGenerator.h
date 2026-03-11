#pragma once

class IInputGenerator {
public:
    virtual ~IInputGenerator() {}
    virtual int generate() = 0; // Menghasilkan "hand" atau angka
};