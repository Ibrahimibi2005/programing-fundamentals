#include <iostream>
using namespace std;
int main()
{
    double i, num, result = 1;

    cout << "Enter the number: ";
    cin >> num;

    if (-1 < num)
    {
        for (i = 1; i <= num; i++)
        {
            result = result * i;
        }
        cout << "The Factorial of the Number " << num << " is: " << result;
    }
    else{
        cout<<"The number should not be negative";
    }
    return 0;
}