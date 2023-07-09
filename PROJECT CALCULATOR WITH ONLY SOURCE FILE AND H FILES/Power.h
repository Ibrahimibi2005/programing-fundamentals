#pragma once

#include "Calculator.h"

class Power : public Calculator
{
protected:
    float num = 0.0;

public:
    Power();

    void setpower(int power);
    float getPower();

    void displayresult() override;
};
