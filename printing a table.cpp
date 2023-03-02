#include<iostream>
using namespace std;
int main ()
{
    int num1 , num2 , num3 , result ;

    cout<<"Enter the value whose table you want: ";
    cin>>num1;

    cout<<"Enter the starting value for the table: ";
    cin>>num2;

    cout<<"Enter the ending value for the table: ";
    cin>>num3;
    
    if(num2 < num3){
    for (int i=num2; i<=num3 ; i++)
    {
        result=num1*i;
        cout << num1 << " x " << i <<  " = "<<result <<endl;
    }
    }
    else {
        cout<<"Invalid Command"; 
    }
    return 0;
}