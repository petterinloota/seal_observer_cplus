#pragma once

class SealWebDisplay
{
    int last_count = 0;
    
public:
    SealWebDisplay();
    ~SealWebDisplay();

    void update(int nr);
};

