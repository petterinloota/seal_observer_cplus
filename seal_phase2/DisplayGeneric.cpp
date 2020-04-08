#include <iostream>
#include <string>
#include "DisplayGeneric.hpp"

DisplayGeneric::DisplayGeneric()
{
}

DisplayGeneric::~DisplayGeneric()
{
}

void DisplayGeneric::RefreshDisplay() {
    std::cout << "DISPLAY - Current seal stray: " << this->last_count << " for --" << this->myName << "--\n";
}

void DisplayGeneric::setName(std::string name) {
    this->myName = name;
}