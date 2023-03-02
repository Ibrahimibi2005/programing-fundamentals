#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    
    
    char a[5] = {'a', 'e', 'i', 'o', 'u'};
    int vowel[5] = {0, 0, 0, 0, 0};
    int length, V = 0, C = 0;
    ifstream fin;
    fin.open("input.txt");
    string st;
    if(!fin)
    {
        cout<<"file does not exist"<<endl;
    }
    
    else
    {
    while (!fin.eof())
    {
        getline(fin, st);
        cout << st;

        for (int i = 0; st[i] != '\0'; i++)
        {
            if (st[i] == 'A' || st[i] == 'a')
            {
                V++;
                vowel[0]++;
            }
            if (st[i] == 'E' || st[i] == 'e')
            {
                V++;
                vowel[1]++;
            }
            if (st[i] == 'I' || st[i] == 'i')
            {
                V++;
                vowel[2]++;
            }
            if (st[i] == 'o' || st[i] == 'O')
            {
                V++;
                vowel[3]++;
            }
            if (st[i] == 'U' || st[i] == 'u')
            {
                V++;
                vowel[4]++;
            }

            if (!((st[i] == 'A' || st[i] == 'a') || (st[i] == 'E' || st[i] == 'e') || (st[i] == 'I' || st[i] == 'i') || (st[i] == 'O' || st[i] == 'o') || (st[i] == 'U' || st[i] == 'u'))&&!(st[i]==' '))
            {
                C++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1; j++)
        {
            if (vowel[j] < vowel[j + 1])
            {
                int temp = vowel[j];
                vowel[j] = vowel[j + 1];
                vowel[j + 1] = temp;

                char x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
                
            }
        }
    }

    cout << endl
         << "Total Vowels: " << V << endl
         << "Total Consonants: " << C << endl
         << "Counts:" << endl;
         
    for (int i = 0; i < 5; i++)
    {
      cout<<"The total '"<<a[i]<<"': "<<vowel[i]<<endl; 
    }
    }

    fin.close();
    ofstream fout;
    fout.open("Output.txt");
    fout << "The Total Vowels: " << V << endl;
    fout << "The Total Consonants: " << C << endl;
    for (int i = 0; i < 5; i++)
    { 
      fout <<"The total '"<<a[i]<<"': "<<vowel[i]<<endl; 
    }
    fout.close();
    

    return 0;
}