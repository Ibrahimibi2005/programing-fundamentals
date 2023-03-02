#include <iostream>
using namespace std;
int main()
{
    
    char state;
    cout << "enter w for working state \n d for dead state: ";
    cin >> state;

    do
    {
        if (state == 'w')
        {
            cout << "Your current state of telephone is: working state";
            break;
        }
        else if (state == 'd')
        {
            cout << "Your current state of telephone is: dead state";
            break;
        }
        else
        {
            cout << "Invalid Input";
            continue;
        }
    } while (state == 'w' || state == 'd');
    return 0;
}