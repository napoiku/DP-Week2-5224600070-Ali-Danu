#pragma once
#include "IScoringSystem.h"
#include <iostream>

class SimpleScoring : public IScoringSystem {
public:
    int calculateScore(const std::vector<std::string>& chosenCards) override {
        // Logika perhitungan skor di sini
        int basePoints = 10;
        int total = chosenCards.size() * basePoints;

        if (chosenCards.size() >= 3) {
            total += 20; // Bonus kombo kartu
            std::cout << "[SYSTEM] Bonus Combo aktif!\n";
        }

        std::cout << "[SYSTEM] menghitung: " << total << " poin.\n";
        return total;
    }
};