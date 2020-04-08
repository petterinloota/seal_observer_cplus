#include "SealCenter.hpp"
#include "DisplayInterface.hpp"

SealCenter::SealCenter()
{
}

SealCenter::~SealCenter()
{
}

void SealCenter::SetState(int count)
{
    this->cur_count = count;    
    curDisplay->Update(count);
}

void SealCenter::RegisterDisplay(DisplayInterface *display)
{
    this->curDisplay = display;
}

