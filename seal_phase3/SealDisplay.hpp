#pragma once

class SealDisplay
{
    protected:
    int id;
public:
    SealDisplay();
    SealDisplay(int id);
    ~SealDisplay();
    
     virtual void Update(int nr) = 0;

};

