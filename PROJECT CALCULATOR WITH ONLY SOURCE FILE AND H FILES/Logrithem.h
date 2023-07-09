#pragma once
#include "Calculator.h"
#include <string>
using namespace std;

class Logrithem : public Calculator
{
protected:
    float logresult = 0.0;

public:
    Logrithem();

    void setlog(string op);
    float getlog();

    void displayresult() override;
};
