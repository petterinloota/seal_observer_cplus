#include "SealCenter.hpp"
#include "SealDisplay.hpp"
#include "Observer.hpp"

SealCenter::SealCenter()
{
}

SealCenter::~SealCenter()
{
}

void SealCenter::NotifyDisplays() {
    for (Observer *o : observers_vector) {
        o->UpdateB(cur_count);
    }
}

void SealCenter::SetState(int count)
{
    this->cur_count = count;    
    NotifyDisplays();
}

void SealCenter::RegisterDisplay(SealDisplay *display)
{
    displays_vector.push_back(display);
}

void SealCenter::RegisterObserver(Observer *o) {
    observers_vector.push_back(o);
}
