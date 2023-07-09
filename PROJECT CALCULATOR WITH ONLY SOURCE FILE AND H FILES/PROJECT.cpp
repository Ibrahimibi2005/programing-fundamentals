#include <iostream>
//#include <string>
#include <cmath>
#include "Calculator.h"
#include"Arthmetic.h"
#include "trignometry.h"
#include "Logrithem.h"
#include "Root.h"
#include "Power.h"
#include "Factorial.h"
using namespace std;

//CACULATOR CLASS
Calculator::Calculator() {}
void Calculator::displayresult() {}

//ARTHMETIC CLASS
Arithmetic_Operations::Arithmetic_Operations(char op, float MOD)
{
    Operator = op;
    modulus = MOD;
}

void Arithmetic_Operations::setadd()
{
    int size;
    cout << "How many numbers you want to add: ";
    cin >> size;
    cout << "Enter " << size << " numbers for addition:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers;
        add += numbers;
        addresult = add;
    }
}

float Arithmetic_Operations::getadd()
{
    return addresult;
}

void Arithmetic_Operations::setsutract()
{
    int size;
    cout << "How many numbers you want to subtract: ";
    cin >> size;
    cout << "Enter " << size << " numbers for subtraction:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers;
        if (i == 0)
        {
            sub = numbers - sub;
        }
        else if (i != 0)
        {
            sub -= numbers;
        }
        subtractresult = sub;
    }
}

float Arithmetic_Operations::getsubtract()
{
    return subtractresult;
}

void Arithmetic_Operations::setmultiply()
{
    int size;
    cout << "How many numbers you want to multiply: ";
    cin >> size;
    cout << "Enter " << size << " numbers for multiplication:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers;
        mul *= numbers;
        multiplyresult = mul;
    }
}

float Arithmetic_Operations::getmultiply()
{
    return multiplyresult;
}

void Arithmetic_Operations::setdivide()
{
    cout << "\nNOTE: Division by zero is undefined. Math Error! So, Denominator cannot be zero." << endl;
    cout << "\nEnter numerator/denominator for division. 1st value=numerator & 2nd value=denominator:" << endl;
    cin >> numerator;
    cin >> denominator;
    if (denominator == 0)
    {
        cout << "ERROR! You entered denominator = 0" << endl;
        numbers = 0;
    }
    else
    {
        div = numerator / denominator;
        divideresult = div;
    }
}

float Arithmetic_Operations::getdivide()
{
    return divideresult;
}

Arithmetic_Operations Arithmetic_Operations::operator%(Arithmetic_Operations)
{
    Arithmetic_Operations Mod('%', modulus);
    return Mod;
}

float Arithmetic_Operations::getMODresult()
{
    return modulus;
}

void Arithmetic_Operations::displayresult()
{
    if (Operator == '+')
    {
        cout << "Addition Result = " << getadd() << endl;
    }
    else if (Operator == '-')
    {
        cout << "Subtraction Result = " << getsubtract() << endl;
    }
    else if (Operator == '*')
    {
        cout << "Multiplication Result = " << getmultiply() << endl;
    }
    else if (Operator == '/')
    {
        cout << "Division Result = " << getdivide() << endl;
    }
    else if (Operator == '%')
    {
        cout << "Modulus Result = " << getMODresult() << endl;
    }
}

//TRIGNOMETRY CLASS
trignometry::trignometry(char op)
{
    Operator = op;
}

void trignometry::setRadian(string op)
{
    if (op == "sin" || op == "SIN")
    {
        cout << "Enter a number in radians to find sin theta: " << endl;
        cin >> numbers;
        Result_radian = sin(numbers);
        cout << "sin (" << numbers << ") = ";
    }
    else if (op == "cos" || op == "COS")
    {
        cout << "Enter a number in radians to find cos theta: " << endl;
        cin >> numbers;
        Result_radian = cos(numbers);
        cout << "cos (" << numbers << ") = ";
    }
    else if (op == "tan" || op == "TAN")
    {
        cout << "Enter a number in radians to find tan theta: " << endl;
        cin >> numbers;
        Result_radian = tan(numbers);
        cout << "tan (" << numbers << ") = ";
    }
    else if (op == "cosec" || op == "COSEC")
    {
        cout << "Enter a number in radians to find COSEC theta: " << endl;
        cin >> numbers;
        Result_radian = 1 / sin(numbers);
        cout << "cosec (" << numbers << ") = ";
    }
    else if (op == "sec" || op == "SEC")
    {
        cout << "Enter a number in radians to find SEC theta: " << endl;
        cin >> numbers;
        Result_radian = 1 / cos(numbers);
        cout << "sec (" << numbers << ") = ";
    }
    else if (op == "cot" || op == "COT")
    {
        cout << "Enter a number in radians to find COT theta: " << endl;
        cin >> numbers;
        Result_radian = 1 / tan(numbers);
        cout << "cot (" << numbers << ") = ";
    }
}

float trignometry::getRadianResult()
{
    return Result_radian;
}

void trignometry::setDegree(string op)
{
    if (op == "sin" || op == "SIN")
    {
        cout << "Enter a number in degrees to find sin theta: " << endl;
        cin >> numbers;
        float radian = numbers * (3.14 / 180);
        Result_degree = sin(radian);
        cout << "sin (" << numbers << ") = ";
    }
    else if (op == "cos" || op == "COS")
    {
        cout << "Enter a number in degrees to find cos theta: " << endl;
        cin >> numbers;
        float radian = numbers * (3.14 / 180);
        Result_degree = cos(radian);
        cout << "cos (" << numbers << ") = ";
    }
    else if (op == "tan" || op == "TAN")
    {
        cout << "Enter a number in degrees to find tan theta: " << endl;
        cin >> numbers;
        float radian = numbers * (3.14 / 180);
        Result_degree = tan(radian);
        cout << "tan (" << numbers << ") = ";
    }
    else if (op == "cosec" || op == "COSEC")
    {
        cout << "Enter a number in degrees to find COSEC theta: " << endl;
        cin >> numbers;
        float radian = numbers * (3.14 / 180);
        float result = 1 / sin(radian);
        Result_degree = result;
        cout << "cosec (" << numbers << ") = ";
    }
    else if (op == "sec" || op == "SEC")
    {
        cout << "Enter a number in degrees to find SEC theta: " << endl;
        cin >> numbers;
        float radian = numbers * (3.14 / 180);
        float result = 1 / cos(radian);
        Result_degree = result;
        cout << "sec (" << numbers << ") = ";
    }
    else if (op == "cot" || op == "COT")
    {
        cout << "Enter a number in degrees to find COT theta: " << endl;
        cin >> numbers;
        float radian = numbers * (3.14 / 180);
        float result = 1 / tan(radian);
        Result_degree = result;
        cout << "cot (" << numbers << ") = ";
    }
}

float trignometry::getDegreeResult()
{
    return Result_degree;
}

void trignometry::displayresult()
{
    if (Operator == 'R' || Operator == 'r')
    {
        cout << getRadianResult() << endl;
    }
    else
    {
        cout << getDegreeResult() << endl;
    }
}
//LOGRITHEM CLASS
Logrithem::Logrithem()
{
}

void Logrithem::setlog(string op)
{
    if (op == "log")
    {
        float base;
        cout << "Enter a number to find log: " << endl;
        cin >> numbers;
        cout << "Enter base of log: " << endl;
        cin >> base;
        logresult = log(numbers) / log(base);
        cout << "log (" << numbers << ") with base " << base << " = ";
    }
    else if (op == "log10")
    {
        cout << "Enter a number to find log10: " << endl;
        cin >> numbers;
        logresult = log10(numbers);
        cout << "log10 (" << numbers << ") = ";
    }
    else if (op == "ln")
    {
        cout << "Enter a number to find ln: " << endl;
        cin >> numbers;
        logresult = log(numbers);
        cout << "ln (" << numbers << ") = ";
    }
}

float Logrithem::getlog()
{
    return logresult;
}

void Logrithem::displayresult()
{
    cout << getlog() << endl;
}

//FACTORIAL CLASS
Factorial::Factorial()
{
}

void Factorial::setfactorial()
{
    cout << "Enter the number to find its factorial: ";
    cin >> numbers;
    factorial = 1;
    for (int i = 1; i <= numbers; i++)
    {
        factorial = factorial * i;
    }
}

float Factorial::getfactorial()
{
    return factorial;
}

void Factorial::displayresult()
{
    cout << "The Factorial of " << numbers << " = " << getfactorial() << endl;
}

//POWER CLASS
Power::Power()
{
}

void Power::setpower(int power)
{
    cout << "Enter the Number: ";
    cin >> numbers;
    num = pow(numbers, power);
}

float Power::getPower()
{
    return num;
}

void Power::displayresult()
{
    cout << getPower() << endl;
}

//ROOT CLASS
Root::Root()
{
}

void Root::set_root(float root)
{
    cout << "Enter the number: ";
    if (root == 2)
    {
        cin >> numbers;
        sqroot = sqrt(numbers);
        numbers = sqroot;
    }
    else if (root == 3)
    {
        cin >> numbers;
        cubroot = cbrt(numbers);
        numbers = cubroot;
    }
    else
    {
        cin >> numbers;
        f = 1 / root;
        numbers = pow(numbers, f);
    }
}

float Root::getroot()
{
    return numbers;
}

void Root::displayresult()
{
    cout << getroot() << endl;
}

int main()
{
    cout << "TEXT BASED SCIENTIFIC CALCULATOR" << endl;
    char option;
    int i = 1;
    while (i == 1)
    {
        cout << "\nMENU:" << endl;
        cout << "Enter 'A' for simple arithmetic operations." << endl;
        cout << "Enter 'L' for logarithmic operation." << endl;
        cout << "Enter 'T' for trigonometric operations." << endl;
        cout << "Enter 'S' for square root, cube root, fourth root, and so on." << endl;
        cout << "Enter 'P' for find power of any number." << endl;
        cout << "Enter 'F' for find factorial of any number." << endl;
        cin >> option;
        if (option == 'A' || option == 'a')
        {
            cout << "ARTHMETIC CALCULATIONS\n" << endl;
            int l = 1;
            while (l == 1)
            {
                string operation;
                cout << "Enter an operator for arithmetic operations (+, -, *, /,%): ";
                cin >> operation;
                if (operation == "+")
                {
                    Arithmetic_Operations add('+',0.0);
                    add.setadd();
                    add.displayresult();
                }
               else if (operation == "-")
                {
                    Arithmetic_Operations sub('-',0.0);
                    sub.setsutract();
                    sub.displayresult();
                }
               else if (operation == "*")
                {
                    Arithmetic_Operations mul('*',0.0);
                    mul.setmultiply();
                    mul.displayresult();
                }
                else if (operation == "/")
                {
                    Arithmetic_Operations div('/',0.0);
                    div.setdivide();
                    div.displayresult();
                }
              else if (operation == "%")
                {
                    float num1, num2;
                    cout << "Enter two numbers to find modulus" << endl;
                    cin >> num1;
                    cin >> num2;
                    Arithmetic_Operations obj1('%',num1), obj2('%',num2), result('%',0.0);
                    result = obj1 % obj2;
                    result.displayresult();
                }
                else
                {
                    cout << "Error: invalid operator. Please choose the operator again." << endl;
                    continue;
                }

                char ch;
                cout << "Do you want to continue arithmetic calculations? (Y/N): ";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else if (option == 'T' || option == 't')
        {
            int t = 1;
            while (t == 1)
            {
                char choice;
                cout << "Enter 'R or r' for performing trigonometric operations in terms of radian." << endl;
                cout << "Enter 'D or d' for performing trigonometric operations in terms of degree." << endl;
                cin >> choice;
                trignometry deg(choice), rad(choice);
                if (choice == 'D' || choice == 'd') 
                {
                    string Operator;
                    cout << "Enter an operator for trigonometric operations (sin, cosec, cos, sec, tan, cot): ";
                    cin >> Operator;
                    deg.setDegree(Operator);
                    deg.displayresult();
                }
                else if(choice == 'R' || choice == 'r')
                {
                    string Operator;
                    cout << "Enter an operator for trigonometric operations (sin, cosec, cos, sec, tan, cot): ";
                    cin >> Operator;
                    rad.setRadian(Operator);
                    deg.displayresult();
                }
                else
                {
                    cout << "Error: invalid operator. Please choose the operation again." << endl;
                    continue;
                }


                char ch;
                cout << "Do you want to perform trignometric caculations again? (Y/N): ";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else if (option == 'L' || option == 'l')
        {
            int m = 1;
            while (m == 1)
            {
                string operation;
                cout << "Enter an operation for logarithmic operations (log, log10, ln): ";
                cin >> operation;
                if (operation == "log" || operation == "log10" || operation == "ln")
                {
                    Logrithem log;
                    log.setlog(operation);
                    log.displayresult();
                }
                else
                {
                    cout << "Error: invalid operator. \nPlease choose the operation again." << endl;
                    continue;

                }
                char ch;
                cout << "Do you want to continue with logarithmic operations? (Y/N)" << endl;
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    m = 1;
                }
                else
                {
                    m = 0;
                }
            }
        }
        else if (option == 'S' || option == 's')
        {
            int l = 1;
            while (l == 1)
            {
                float root;
                cout << "Enter which root you want to perform (i.e : for square type 2 and for cube 3 and so on...) : ";
                cin >> root;
                Root r;
                r.set_root(root);
                cout << "Result : ";
                r.displayresult();

                char ch;
                cout << "Do you want to continue roots calculations? (Y/N): ";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else if (option == 'P' || option == 'p')
        {
            int t = 1;
            while (t == 1)
            {
                int power=0, num=0;
                Power p;
                cout << "Enter Power of the Number: ";
                cin >> power;
                p.setpower(power);
                cout << "Result: ";
                p.displayresult();

                char ch;
                cout << "Do you want to perform Power caculations again? (Y/N): ";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else if (option == 'F' || option == 'f')
        {
            int t = 1;
            while (t == 1)
            {
                Factorial fact;
                fact.setfactorial();
                fact.displayresult();
                char ch;
                cout << "Do you want to perform factorial caculation again? (Y/N): ";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            }

        else
        {
            cout << "Error: invalid choice. Please choose the correct option from the menu." << endl;
            continue;
        }

        char ch;
        cout << "If you want to continue calculations type 'C' or 'c' and for exit type 'E' or 'e' : ";
        cin >> ch;
        if (ch == 'C' || ch == 'c')
        {
            continue;
        }
        else if(ch == 'E' || ch == 'e')
        {
            cout << "GOOD BYE (:" << endl;
            break;
        }
    }
    return 0;
}
