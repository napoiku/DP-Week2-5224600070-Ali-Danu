#include <vector>
#include <iostream>
#include "ModifierFactory.h"
#include "IModifier.h"

class ShopSystem {
public:
    void showOffers() {
        std::cout << "[SHOP] Fase Toko: 1. Boost Flat ($5), 2. Upgrade Mult ($10)\n";
    }

    IModifier* buyModifier(int choice, int& currentMoney) {
        if (choice == 1 && currentMoney >= 5) {
            currentMoney -= 5;
            return ModifierFactory::createModifier(1);
        } else if (choice == 2 && currentMoney >= 10) {
            currentMoney -= 10;
            return ModifierFactory::createModifier(2);
        }
        std::cout << "[SHOP] Uang tidak cukup atau pilihan salah.\n";
        return nullptr;
    }
};