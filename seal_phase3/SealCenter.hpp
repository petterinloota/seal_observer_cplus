#pragma once
#include "SealWebDisplay.hpp"
#include "SealDisplay.hpp"

class SealCenter
{
    int cur_count = 0;
    // SealWebDisplay sealWebDisplay;
    SealDisplay *sealDisplay;
    
public:
    SealCenter();
    ~SealCenter();
    
    void SetState(int cur_count);
    // void RegisterDisplay(SealWebDisplay display);
    void RegisterDisplay(SealDisplay *display);
};



