#include <iostream>

using namespace std;

int main()
{
    int dijital = 10, generalNumber, chislo, array[dijital] = {0};
    dijital = 0;
    for(int number = 0; number < 10; number++)
    {
        cout << "array[" << dijital << "] = ";
        cin >> chislo;
        array[number] = chislo;
        dijital++;
    }
    cout << "Enter your number - ";
    cin >> generalNumber;
    dijital = 0;
    for(int newNumber : array)
    {
        cout << newNumber + generalNumber << " ";
        array[dijital] = newNumber + generalNumber;
        dijital++;
    }
    return 0;
}
