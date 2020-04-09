#include "SealCenter.hpp"
#include "SealWebDisplay.hpp"
#include "SealDisplay.hpp"

SealCenter::SealCenter()
{
}

SealCenter::~SealCenter()
{
}

void SealCenter::SetState(int count)
{
    this->cur_count = count;
    
    sealDisplay->Update(count);
    // sealWebDisplay->Update(count);
}

// void SealCenter::RegisterDisplay(SealWebDisplay display)
void SealCenter::RegisterDisplay(SealDisplay *display)
{
    this->sealDisplay = display;
    // this->sealWebDisplay = display;
}

