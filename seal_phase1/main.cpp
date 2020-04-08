#include <iostream>
#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
 
int main () {
    int currentSealCount = 7;
    
    SealCenter sealCenter;
    SealWebDisplay sealWebDisplay;
    
    sealCenter.RegisterDisplay(sealWebDisplay);    
    
    std::cout << "Seal Center Operative ...\n\n";
    
    sealCenter.SetState(currentSealCount);
    
    return 0;
}
