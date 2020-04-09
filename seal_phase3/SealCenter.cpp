#include "SealCenter.hpp"
#include "SealDisplay.hpp"

SealCenter::SealCenter()
{
}

SealCenter::~SealCenter()
{
}

void SealCenter::NotifyDisplays() {
     for (SealDisplay *display : displays_vector) { // notify all observers
        display->Update(cur_count);
    }
}

void SealCenter::SetState(int count)
{
    this->cur_count = count;    
    NotifyDisplays();
}

void SealCenter::RegisterDisplay(SealDisplay *display)
{
    this->sealDisplay = display;
    displays_vector.push_back(display);
}

