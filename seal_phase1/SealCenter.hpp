#pragma once
#include "SealWebDisplay.hpp"

class SealCenter
{
    int cur_count = 0;
    SealWebDisplay sealWebDisplay;
    
public:
    SealCenter();
    ~SealCenter();
    
    void SetState(int cur_count);
    void RegisterDisplay(SealWebDisplay display);
};


