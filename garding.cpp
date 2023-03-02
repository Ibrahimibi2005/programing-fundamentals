#include <iostream>
using namespace std;
int main()
{
    float grade1, grade2, grade3;

    cout << "Enter your First Grade: ";
    cin >> grade1;

    cout << "Enter your second Grade: ";
    cin >> grade2;
    cout << "Enter your third Grade: ";
    cin >> grade3;

    if ((4.0 >= grade1&&  grade2 && grade3 >= 1.0) )
    {

        if ((grade1 > grade2) && (grade2 > grade3))
        {
            cout << "First grade is the best grade" << endl;
            cout << "Second grade is better than Third grade" << endl;
            cout << "Third grade is the worst grade" << endl;
        }

        else if ((grade1 > grade3) && (grade3 > grade2))
        {
            cout << "First grade is the best grade" << endl;
            cout << "Third grade is better than Second grade" << endl;
            cout << "Second grade is the worst grade" << endl;
        }

           else if ((grade2 > grade3) && (grade3 > grade1))
        {
           cout << "Second grade is the best grade" << endl;
           cout << "Third grade is better than First grade" << endl;
           cout << "First grade is the worst grade" << endl;
        }

        else if ((grade2 > grade1) && (grade1 > grade3))
        {
            cout << "Second grade is the best grade" << endl;
            cout << "First grade is better than Third grade" << endl;
            cout << "Third grade is the worst grade" << endl;
        }

        else if ((grade3 > grade1) && (grade1 > grade2))
        {
            cout << "Third grade is the best grade" << endl;
            cout << "First grade is better than Second grade" << endl;
            cout << "Second grade is the worst grade" << endl;
        }

        else if ((grade3 > grade2) && (grade2 > grade1))
        {
            cout << "Third grade is the best grade" << endl;
            cout << "Second grade is better than First grade" << endl;
            cout << "First grade is the worst grade" << endl;
        }
        else if ((grade1 == grade2) || (grade2 == grade3) ||  (grade1 == grade3))
        {
            cout << "Grades should not be equal and grade should be ";
        }
        else {
            cout << "enter value between 1.0-4.0" << endl;
        }
    }
    else
    {
        cout << "\nenter value between 1.0-4.0" << endl;
    }

    return 0;
}