#pragma once
#include "DisplayGeneric.hpp"

class SealWebDisplay : public DisplayGeneric
{
    int last_count = 0;
    
public:
    SealWebDisplay();
    ~SealWebDisplay();

    virtual void Update(int nr);
};
