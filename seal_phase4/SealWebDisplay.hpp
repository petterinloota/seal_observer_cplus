#pragma once
#include "SealDisplay.hpp"
#include "Observer.hpp"

class SealWebDisplay : public SealDisplay, public Observer 
{
    int last_count = 0;
    
public:
    SealWebDisplay();
    SealWebDisplay(int i);
    ~SealWebDisplay();

    virtual void Update(int nr) override;
    virtual void UpdateB(int nr) override;
};

