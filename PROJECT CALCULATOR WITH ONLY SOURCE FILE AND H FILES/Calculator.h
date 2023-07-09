#pragma once
class Calculator
{
protected:
     float numbers = 0.0;
     float add = 0.0, mul = 1, sub = 0.0, div = 0.0, numerator = 0.0, denominator = 0.0, modulus = 0.0;
     float sqroot = 0.0, cubroot = 0.0;
     float factorial = 1;
     char Operator = '\0';
public:
      Calculator();
      virtual void displayresult();
};

