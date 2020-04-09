#pragma once

#include "SealDisplay.hpp"
#include <vector>

class SealCenter
{
    int cur_count = 0;
    
    SealDisplay *sealDisplay;
    std::vector<SealDisplay *> displays_vector;
    
protected:
    void NotifyDisplays();
  
public:
    SealCenter();
    ~SealCenter();
    
    void SetState(int cur_count);
    
    void RegisterDisplay(SealDisplay *display);
};



