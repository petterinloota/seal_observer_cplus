#include <iostream>
#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
 
int main () {
    int currentSealCount = 7;
    
    SealCenter sealCenter;
    SealWebDisplay sealWebDisplay(2);
    
    sealCenter.RegisterDisplay(&sealWebDisplay);    
    
    std::cout << "=== Seal Center Operative == PHASE 3 === \n\n";
    
    sealCenter.SetState(currentSealCount);
    
    return 0;
}
