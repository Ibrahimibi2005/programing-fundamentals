#pragma once
#include"Calculator.h"

class Arithmetic_Operations : public Calculator
{
protected:
    float addresult = 0.0, subtractresult = 0.0, multiplyresult = 0.0, divideresult = 0.0;
public:
    Arithmetic_Operations(char op, float MOD);

    void setadd();
    float getadd();

    void setsutract();
    float getsubtract();

    void setmultiply();
    float getmultiply();

    void setdivide();
    float getdivide();

    Arithmetic_Operations operator%(Arithmetic_Operations);
    float getMODresult();

    void displayresult() override;
};
