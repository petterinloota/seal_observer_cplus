#pragma once
#include "Observer.hpp"
#include <iostream>

class WwfReporter : public Observer
{
public:
    WwfReporter();
    ~WwfReporter();
    
    void UpdateB(int nr) override;

};

