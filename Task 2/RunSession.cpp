#include "RunSession.h"
#include <iostream>

RunSession::RunSession(IScoringSystem* s, IRewardSystem* r, IGenerateHand* g) 
    : money(0), currentRound(1), scoring(s), reward(r), generator(g) {}

RunSession::~RunSession() {
    for (auto m : inventory) delete m;
}

void RunSession::startRun() {
    while (currentRound <= 3) {
        processRound();
        currentRound++; // Langkah 9: Ulangi
    }
}

void RunSession::processRound() {
    std::cout << "\n--- RONDE " << currentRound << " ---\n";
    
    blindSelector.Select(); // Langkah 1
    generator->generate();  // Langkah 2
    std::cout << "Pemain memilih kartu.\n"; // Langkah 3
    
    // Langkah 4: Hitung skor di SimpleScoring
    std::vector<std::string> chosen = {"Card1", "Card2", "Card3"};
    int finalScore = scoring->calculateScore(chosen);
    
    // Terapkan Modifier jika ada
    for (auto m : inventory) finalScore = m->transformScore(finalScore);
    
    // Langkah 5 & 6: Cek Win & Reward
    bool win = (finalScore >= 30);
    int gain = reward->calculateMoneyReward(win, currentRound);
    money += gain;
    
    std::cout << "[SYSTEM] Skor: " << finalScore << (win ? " (WIN)" : " (LOSE)") << "\n";
    std::cout << "[SYSTEM] Uang sekarang: $" << money << "\n";

    // Langkah 7 & 8: Toko
    shop.showOffers();
    IModifier* item = shop.buyModifier(1, money);
    if (item) inventory.push_back(item);
}