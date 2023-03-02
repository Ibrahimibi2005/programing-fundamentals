#include <iostream>
using namespace std;

int main()
{
    string med1, med2, med3, med4, med5;
    float price1, price2, price3, price4, price5, total, Total;

    cout << "Enter the name of first medicine: ";
    cin >> med1;

    cout << "Enter the name of second medicine: ";
    cin >> med2;

    cout << "Enter the name of third medicine: ";
    cin >> med3;

    cout << "Enter the name of fourth medicine: ";
    cin >> med4;

    cout << "Enter the name of fifth medicine: ";
    cin >> med5;

    cout << "Enter the price of first medicine: ";
    cin >> price1;

    cout << "Enter the price of second medicine: ";
    cin >> price2;

    cout << "Enter the price of third medicine: ";
    cin >> price3;

    cout << "Enter the price of fourth medicine: ";
    cin >> price4;

    cout << "Enter the price of fifth medicine: ";
    cin >> price5;

    if ((price1 >=1) && (price2 >=1) &&  (price3 >=1 )&& (price4 >=1) && (price5 >= 1))

    {
        Total = price1 + price2 + price3 + price4 + price5;
        if (Total >= 20000)
        {
            total = Total - ((Total / 100) * 5);
            cout << "                                   ABC Store\n";
            cout << "                                   18-04-2022\n";
            cout << "                                   Reciept ID: 123456\n";
            cout << "________________________________________________________________" << endl;
            cout << "                            " << med1 << " ____________" << price1 << endl;
            cout << "                            " << med2 << " ____________" << price2 << endl;
            cout << "                            " << med3 << " ____________" << price3 << endl;
            cout << "                            " << med4 << " ____________" << price4 << endl;
            cout << "                            " << med5 << " ____________" << price5 << endl;
            cout << "                            Total ____________" << Total << endl;
            cout << "                            Disount ____________ (5%)" << endl;
            cout << "                            Total Due ____________" << total << endl;
        }
        else if (15000 <= Total < 20000)
        {
            total = Total - (Total / 100) * 4;
            cout << "                                   ABC Store\n";
            cout << "                                   18-04-2022\n";
            cout << "                                   Reciept ID: 123456\n";
            cout << "________________________________________________________________" << endl;
            cout << "                            " << med1 << " ____________" << price1 << endl;
            cout << "                            " << med2 << " ____________" << price2 << endl;
            cout << "                            " << med3 << " ____________" << price3 << endl;
            cout << "                            " << med4 << " ____________" << price4 << endl;
            cout << "                            " << med5 << " ____________" << price5 << endl;
            cout << "                            Total ____________" << Total << endl;
            cout << "                            Disount ____________ (4%)" << endl;
            cout << "                            Total Due ____________" << total << endl;
        }
    

     else if (10000 <= Total < 15000)
     {
        total = Total - (Total / 100) * 3;
        cout << "                                   ABC Store\n";
        cout << "                                   18-04-2022\n";
        cout << "                                   Reciept ID: 123456\n";
        cout << "________________________________________________________________" << endl;
        cout << "                            " << med1 << " ____________" << price1 << endl;
        cout << "                            " << med2 << " ____________" << price2 << endl;
        cout << "                            " << med3 << " ____________" << price3 << endl;
        cout << "                            " << med4 << " ____________" << price4 << endl;
        cout << "                            " << med5 << " ____________" << price5 << endl;
        cout << "                            Total ____________" << Total << endl;
        cout << "                            Disount ____________ (3%)" << endl;
        cout << "                            Total Due ____________" << total << endl;
     }

     else if (50000 <= Total < 10000)
     {
        total = Total - (Total / 100) * 2;
        cout << "                                   ABC Store\n";
        cout << "                                   18-04-2022\n";
        cout << "                                   Reciept ID: 123456\n";
        cout << "________________________________________________________________" << endl;
        cout << "                            " << med1 << " ____________" << price1 << endl;
        cout << "                            " << med2 << " ____________" << price2 << endl;
        cout << "                            " << med3 << " ____________" << price3 << endl;
        cout << "                            " << med4 << " ____________" << price4 << endl;
        cout << "                            " << med5 << " ____________" << price5 << endl;
        cout << "                            Total ____________" << Total << endl;
        cout << "                            Disount ____________ (2%)" << endl;
        cout << "                            Total Due ____________" << total << endl;
     }

     else if (1000 <= Total < 5000)
      {
        total = Total - (total / 100) * 1;
        cout << "                                   ABC Store\n";
        cout << "                                   18-04-2022\n";
        cout << "                                   Reciept ID: 123456\n";
        cout << "________________________________________________________________" << endl;
        cout << "                            " << med1 << " ____________" << price1 << endl;
        cout << "                            " << med2 << " ____________" << price2 << endl;
        cout << "                            " << med3 << " ____________" << price3 << endl;
        cout << "                            " << med4 << " ____________" << price4 << endl;
        cout << "                            " << med5 << " ____________" << price5 << endl;
        cout << "                            Total ____________" << Total << endl;
        cout << "                            Disount ____________ (1%)" << endl;
        cout << "                            Total Due ____________" << total << endl;
     }
     else
     {
        cout << "Your price is in negative enter price in positive";
     }
    }
    else
    {
        cout << "Your price is in negative enter price in positive";
    }

    return 0;
}
