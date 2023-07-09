#pragma once

#include "Calculator.h"

class Factorial : public Calculator
{
public:
    Factorial();

    void setfactorial();
    float getfactorial();

    void displayresult() override;
};
