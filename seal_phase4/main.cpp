#include <iostream>
#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
#include "WwfReporter.hpp"
 
int main () {
    int currentSealCount = 7;
    
    SealCenter sealCenter;
    SealWebDisplay sealWebDisplay1(1886);
    SealWebDisplay sealWebDisplay2(2767);
    WwfReporter wwfReporter;
    
    sealCenter.RegisterObserver(&sealWebDisplay1);    
    sealCenter.RegisterObserver(&sealWebDisplay2);        
    sealCenter.RegisterObserver(&wwfReporter);       
    
    std::cout << "=== Seal Center Operative == PHASE 4 === \n\n";
    
    sealCenter.SetState(currentSealCount);
    
    return 0;
}
