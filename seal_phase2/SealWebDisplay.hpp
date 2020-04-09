#pragma once
#include "DisplayGeneric.hpp"
#include "DisplayInterface.hpp"
#include <string>

class SealWebDisplay : public DisplayGeneric
{
public:
    SealWebDisplay();
    ~SealWebDisplay();

    virtual void Update(int nr);
};
