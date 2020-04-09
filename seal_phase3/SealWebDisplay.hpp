#pragma once
#include "SealDisplay.hpp"

class SealWebDisplay : public SealDisplay
{
    int last_count = 0;
    
public:
    SealWebDisplay();
    SealWebDisplay(int i);
    ~SealWebDisplay();

    virtual void Update(int nr) override;
};

