#include <iostream>
#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
#include "DisplayInterface.hpp"
 
int main () {
    int currentSealCount = 7;
    
    SealCenter sealCenter;
    SealWebDisplay sealWebDisplay;
    sealCenter.RegisterDisplay((DisplayInterface*) &sealWebDisplay);    
    
    std::cout << "=== Seal Center Operative == PHASE 2 === \n\n";
    
    sealCenter.SetState(currentSealCount);
    
    return 0;
}
