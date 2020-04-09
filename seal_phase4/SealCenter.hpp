#pragma once

#include "SealDisplay.hpp"
#include "Observer.hpp"
#include <vector>

class SealCenter
{
    int cur_count = 0;
            
    std::vector<SealDisplay *> displays_vector;
    std::vector<Observer *> observers_vector;
    
protected:
    void NotifyDisplays();
  
public:
    SealCenter();
    ~SealCenter();
    
    void SetState(int cur_count);
    
    void RegisterDisplay(SealDisplay *display);
    void RegisterObserver(Observer *o);
};



