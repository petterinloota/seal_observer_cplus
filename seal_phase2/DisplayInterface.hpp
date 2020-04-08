#pragma once

class DisplayInterface
{
public:
    DisplayInterface();
    ~DisplayInterface();

    virtual void Update(int nr); // =0 is necessary if a pure virtual function ... no local implementation
};

