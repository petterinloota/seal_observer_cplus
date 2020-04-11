#pragma once

#include "SealDisplay.hpp"
#include <vector>

class SealCenter
{
    int cur_count = 0;
    
    std::vector<SealDisplay *> displays_vector;
    
protected:
    void NotifyDisplays();
  
public:
    void RegisterDisplay(SealDisplay *display);
    void SetState(int cur_count);
    SealCenter();
    ~SealCenter();
};



