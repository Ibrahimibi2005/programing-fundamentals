#include<iostream>
using namespace std;
int main ()
{
    float subject1, subject2, subject3, subject4, subject5;
    float total, average;

    cout<<"Enter your first Subject marks: ";
    cin>> subject1;

    cout<<"Enter your second Subject marks: ";
    cin>> subject2;

    cout<<"Enter your third Subject marks: ";
    cin>> subject3;

    cout<<"Enter your fourth Subject marks: ";
    cin>> subject4;

    cout<<"Enter your fifth Subject marks: ";
    cin>> subject5;

    total= subject1 + subject2 + subject3 + subject4 + subject5;
    average =(subject1 + subject2 + subject3 + subject4 + subject5)/5;

    cout<<"The total is: "<<total<<endl;
    cout<<"The average is: "<<average;
    
    return 0;
}