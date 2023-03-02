#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int Q_NO = 1;
int CORRECT = 0;
int WRONG = 0;
bool ask[10] = {true , true , true , true , true , true , true , true , true , true};

void display_random_question();
void display();
void question(string question , string a , string b , string c , string d , char correct_answer);
void result();

int main()
{
    display();
    return 0;
}

void display()
{
    system("cls");
    cout << "Question NO:" << Q_NO << "\t\tCorrect Answers:" << CORRECT << "\t\tWrong Answers:" << WRONG
    << endl << endl;
    display_random_question();
}

void display_random_question()
{
    srand(time(0));
    bool is_question_remaining = false;
    for(int i=0; i<10; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true;
            break;
        }
    }
    while(is_question_remaining)
    {
        int no = rand()%10;
        if(ask[no])
        {
            ask[no] = false;
            switch(no)
            {
            case 0 :
                question("1Which language supports the Object Oriented Programming Technique?" , "C language"
                         , "C++ language" , "Cobal language" , "Fortran Language" , 'b');
                         break;
            case 1 :
                question("2What is a variable?" , "A empty container in which we store data" , "box" ,
                         "Data type" , "language" , 'a');
                         break;
            case 2 :
                question("3Which language supports the Object Oriented Programming Technique?" , "C language"
                         , "C++ language" , "Cobal language" , "Fortran Language" , 'b');
                         break;
            case 3 :
                question("4What is a variable?" , "A empty container in which we store data" , "box" ,
                         "Data type" , "language" , 'a');
                         break;
            case 4 :
                question("5Which language supports the Object Oriented Programming Technique?" , "C language"
                         , "C++ language" , "Cobal language" , "Fortran Language" , 'b');
                         break;
            case 5 :
                question("6What is a variable?" , "A empty container in which we store data" , "box" ,
                         "Data type" , "language" , 'a');
                         break;
            case 6 :
                question("7Which language supports the Object Oriented Programming Technique?" , "C language"
                         , "C++ language" , "Cobal language" , "Fortran Language" , 'b');
                         break;
            case 7 :
                question("8hat is a variable?" , "A empty container in which we store data" , "box" ,
                         "Data type" , "language" , 'a');
                         break;
            case 8 :
                question("9Which language supports the Object Oriented Programming Technique?" , "C language"
                         , "C++ language" , "Cobal language" , "Fortran Language" , 'b');
                         break;
            case 14 :
                questions("Identify the logical AND operator" , "&" , "||" ,"&&" , "none" , 'c','C');
                         break;

            }
        }
    }
    result();
}

void result()
{
    system("cls");
    cout << "Total Question = " << Q_NO-1 << endl;
    cout << "Correct Answers = " << CORRECT << endl;
    cout << "Wrong Answers = " << WRONG << endl;
    if(CORRECT > WRONG)
        cout << "Result = PASS" << endl;
    else if(WRONG > CORRECT)
        cout << "Result = FAIL" << endl;
    else
        cout << "Result = Tie" << endl;
}

void question(string question , string a , string b , string c , string d , char correct_answer)
{
    cout << question << endl;
    cout << "A.\t" << a << endl;
    cout << "B.\t" << b << endl;
    cout << "C.\t" << c << endl;
    cout << "D.\t" << d << endl;
    char answer;
    cin >> answer;
    if(answer == correct_answer)
        CORRECT++;
    else
        WRONG++;
    Q_NO++;
    display();
}
