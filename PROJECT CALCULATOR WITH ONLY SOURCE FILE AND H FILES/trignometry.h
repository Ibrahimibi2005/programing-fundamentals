#pragma once
#include "Calculator.h"
#include <string>
using namespace std;
class trignometry : public Calculator
{
protected:
    float Result_degree = 0.0, Result_radian = 0.0;

public:
    trignometry(char op);

    void setRadian(string op);
    float getRadianResult();

    void setDegree(string op);
    float getDegreeResult();

    void displayresult() override;
};
