#pragma once
#include "DisplayInterface.hpp"

class SealCenter
{
    int cur_count = 0;
    DisplayInterface *curDisplay;
    
public:
    SealCenter();
    ~SealCenter();
    
    void SetState(int cur_count);
    void RegisterDisplay(DisplayInterface *display);
};
