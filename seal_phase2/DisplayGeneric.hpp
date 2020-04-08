#pragma once
#include "DisplayInterface.hpp"
#include <string>

class DisplayGeneric
{
    
public:
    DisplayGeneric();
    ~DisplayGeneric();
    
protected:
    std::string myName;
    int last_count = 0;

    void RefreshDisplay();
    void setName(std::string name);
};

