#include<iostream>
using namespace std;
int main ()
{
    
    int num1 , even , odd;

    cout<<"Enter the number: ";
    cin>>num1;
    
    even=0;
    odd=0;
    
    for(int i=1; i <= num1; i++ )
    {
        if(i%2==0)
        {

          even =even+i;
          continue;
        }
        else 
        {
         odd=odd+i;
         continue;
        }
       
    }
    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd<<endl;
    return 0;
}