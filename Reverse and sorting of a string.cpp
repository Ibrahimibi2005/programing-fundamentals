#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{ 
  
    int i;
    string alphabets;
    char temp;
    cout << "Enter the string: ";
    getline(cin, alphabets);
    i=alphabets.length();
    cout << "The lenght is: " << i << "\nString is: ";
    if (i % 2 == 0)//reverse
    for (int j = 0; alphabets[j] != '\0'; j++)
    {
        
        
         if (j <= (i - 1) / 2)
        {
        int x = alphabets[j];
        alphabets[j] = alphabets[i - 1 - j];
        alphabets[i - 1 - j] = x;
       }
        cout << alphabets[j];
    }
    if (i % 2 == 1)//sorting
        {
            for (int j = 0; alphabets[j] != '\0'; j++)
            {
                for (int z=0;z<i-j-1;z++)
                {
                     
                    if(alphabets[z]>alphabets[z+1])
                    {
                    char temp=alphabets[z];
                    alphabets[z]=alphabets[z+1];
                    alphabets[z+1]=temp;
                    }
                   

                }
               
            }
            for (int j = 0; alphabets[j] != '\0'; j++)
            {
                cout<<alphabets[j];
            }
            
        }
    

    return 0;
}