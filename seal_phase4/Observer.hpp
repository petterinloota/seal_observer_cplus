#pragma once

class Observer
{
public:
    Observer();
    ~Observer();

    virtual void UpdateB(int nr) = 0;
};

