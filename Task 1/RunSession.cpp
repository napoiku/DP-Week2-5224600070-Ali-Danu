#include "RunSession.h"
#include <iostream>

RunSession::RunSession(IInputGenerator* ig, IScoringRule* sr, IRewardRule* rr, ShopSystem* ss) 
    : totalMoney(0), inputGen(ig), scoring(sr), reward(rr), shop(ss) {}

void RunSession::runGame() {
    std::cout << "=== RUN START ===\n";
    for (int round = 1; round <= 3; ++round) {
        std::cout << "Round " << round << "\n";

        // 1. Generate Input
        int input = inputGen->generate();
        std::cout << "[PLAY] input generated: " << input << "\n";

        // 2. Compute Base Score
        int score = scoring->calculateScore(input);
        std::cout << "[SCORE] base score: " << score << "\n";

        // 3. Compute Reward & 4. Update Money
        int gain = reward->calculateReward(score, round);
        totalMoney += gain;
        std::cout << "[REWARD] gain: " << gain << " money: " << totalMoney << "\n";

        // 5. Shop
        shop->showOffer();

        std::cout << "-------------------\n";
    }
    std::cout << "=== RUN END ===\n";
    std::cout << "Final money: " << totalMoney << "\n";
}