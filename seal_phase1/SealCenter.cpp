#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"

SealCenter::SealCenter()
{
}

SealCenter::~SealCenter()
{
}

void SealCenter::SetState(int count)
{
    this->cur_count = count;
    
    sealWebDisplay.Update(count);
}

void SealCenter::RegisterDisplay(SealWebDisplay display)
{
    this->sealWebDisplay = display;
}

