#include "SealWebDisplay.hpp"
#include <iostream>

SealWebDisplay::SealWebDisplay()
{
}

SealWebDisplay::SealWebDisplay(int id)
{
    this->id =id;
}

SealWebDisplay::~SealWebDisplay()
{
}

void SealWebDisplay::Update(int nr) {
    this->last_count = nr; // Store the previous value ... 
    std::cout << "Web Display. Current seal stray: " << nr << "\n";
    std::cout << this->id;
}