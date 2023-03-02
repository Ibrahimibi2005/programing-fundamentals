#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("task4.txt");
    string st,st1;
    int i=0,Small=0,Capital=0;
    
    if(!fin){
        cout<<"File does not exist";
    } 
    
    else
    while(!fin.eof())
    {
        getline(fin,st);
        cout<<st<<endl;
      for (i;st[i]!='\0';i++){
        if (st[i]>=65&&st[i]<=90)
        Capital++;
        if(st[i]>=97&&st[i]<=122)
        Small++;
      }
    }
    cout<<"Capital= "<<Capital<<endl;
    cout<<"Small= "<<Small<<endl;
    fin.close();

}