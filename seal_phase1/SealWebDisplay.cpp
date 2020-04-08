#include "SealWebDisplay.hpp"
#include <iostream>

SealWebDisplay::SealWebDisplay()
{
}

SealWebDisplay::~SealWebDisplay()
{
}

void SealWebDisplay::update(int nr) {
    this->last_count = nr; // Store the previous value ... 
    std::cout << "Web Display. Current seal stray: " << nr << "\n";
}