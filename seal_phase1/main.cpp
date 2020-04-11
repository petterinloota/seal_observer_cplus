#include <iostream>
#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
 
int main () {
    int currentSealCount = 410;
    
    SealCenter sealCenter;
    SealWebDisplay sealWebDisplay;
    
    sealCenter.RegisterDisplay(&sealWebDisplay);    
    
    std::cout << "=== Seal Center Operative == PHASE 1 === \n\n";
    
    sealCenter.SetState(currentSealCount);
    
    return 0;
}
