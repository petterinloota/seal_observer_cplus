#pragma once
#include <string>

class DisplayInterface
{
public:
    virtual void Update(int nr); // =0 is necessary if a pure virtual function ... no local implementation   
};

