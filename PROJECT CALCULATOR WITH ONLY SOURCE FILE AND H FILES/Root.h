#pragma once
#include "Calculator.h"

class Root : public Calculator
{
protected:
    float f = 0.0;

public:
    Root();

    void set_root(float root);
    float getroot();

    void displayresult() override;
};
