#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
  
    {
    string st;
    ifstream fin;
    ofstream fout;
    fout.open("record.txt");
    fin.open("students.txt");
    if(!fin)
    {
        cout<<"file does not exist"<<endl;
    }
     else
    {
    cout<<"Semester"<<"\t\t"<<"program"<<"\t\t"<<"Roll No."<<endl;
    fout<<"Semester"<<"\t\t"<<"program"<<"\t\t"<<"Roll No."<<endl;
    while (!fin.eof())
    {
        getline(fin,st);
        string reg=st.substr(0,4);
        string prog=st.substr(5,3);
        string Roll=st.substr(9);
        cout<<reg<<"\t\t\t"<<prog<<"\t\t\t"<<Roll<<endl;
        fout<<reg<<"\t\t\t"<<prog<<"\t\t\t"<<Roll<<endl;

    }
    
    }
    fin.close();
    fout.close();
    
}
}