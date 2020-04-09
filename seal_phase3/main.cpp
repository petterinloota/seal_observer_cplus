#include <iostream>
#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
 
int main () {
    int currentSealCount = 7;
    
    SealCenter sealCenter;
    SealWebDisplay sealWebDisplay1(6886);
    SealWebDisplay sealWebDisplay2(8767);
    
    sealCenter.RegisterDisplay(&sealWebDisplay1);    
    sealCenter.RegisterDisplay(&sealWebDisplay2);    
    
    std::cout << "=== Seal Center Operative == PHASE 3 === \n\n";
    
    sealCenter.SetState(currentSealCount);
    
    return 0;
}
