#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int plusovat = 0, minusovat = 0,enter = -1, pin = 0, password[10] = {1337, 2228, 1234, 8000, 1111, 2696, 3993, 4564, 9876, 1973}, money[10] = {500, 1500, 0, 0, 0, 0, 0, 0, 0, 0};
    while(true)
    {
        char dijital = ' ';
        do
        {
        cout << "Bank account: "; cin >> enter; cout << endl;
        enter--;
        } while(enter < 0 || enter > 9);
        while(dijital != 's')
        {
            cout << "PIN for " << enter + 1 << " account: "; cin >> pin;
            if(pin != password[enter])
            {
                cout << "ERROR" << endl;
                system("pause");
                system("cls");
                cout << "Bank account: " << enter + 1 << endl << endl;
            continue;
            }
            system("cls");
            while(dijital != 's')
            {
                cout << "Your money: " << money[enter] << " $" << endl;
                cout << " What can I do?" << endl;
                cout << " a - add money" << endl;
                cout << " w - withdraw money" << endl;
                cout << " s - stop working" << endl << endl;
                cin >> dijital;
                if(dijital == 'a')
                {
                    do
                    {
                        cout << "Enter you sum want to add: ";
                        cin >> plusovat;
                        system("cls");
                        cout << "Your money: " << money[enter] << " $" << endl;
                        cout << " What can I do?" << endl;
                        cout << " a - add money" << endl;
                        cout << " w - withdraw money" << endl ;
                        cout << " s - stop working" << endl << endl;
                    } while(plusovat < 0);
                    money[enter] += plusovat;
                }
                if(dijital == 'w')
                {
                    if(money[enter] == 0)
                    {
                       cout << "ERROR!!!" << endl;
                       cout << "NO MONEY" << endl;
                       system("pause");
                       system("cls");
                       continue;
                    }
                    do
                    {
                        cout << "Enter you sum want to withdraw: ";
                        cin >> minusovat;
                        system("cls");
                    } while(minusovat < 0);
                    money[enter] -= minusovat;
                }
                else system("cls"); continue;
            }
        }
    }
    return 0;
}
