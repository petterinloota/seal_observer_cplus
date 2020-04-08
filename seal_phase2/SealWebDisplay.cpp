#include "SealWebDisplay.hpp"
#include <iostream>

SealWebDisplay::SealWebDisplay()
{
    this->myName = "Web Display";
}

SealWebDisplay::~SealWebDisplay()
{
}

void SealWebDisplay::Update(int nr) {
    this->last_count = nr; // Store the previous value ... 
    this->RefreshDisplay();
}