#pragma once
// #include "SealWebDisplay.hpp"
#include "DisplayInterface.hpp"

class SealCenter
{
    int cur_count = 0;
    
    // SealWebDisplay sealWebDisplay;
    DisplayInterface *curDisplay;
    
public:
    SealCenter();
    ~SealCenter();
    
    void SetState(int cur_count);
    //void RegisterDisplay(SealWebDisplay display);
    void RegisterDisplay(DisplayInterface *display);
    
};


