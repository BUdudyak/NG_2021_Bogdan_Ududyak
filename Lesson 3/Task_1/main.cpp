#include <iostream>

using namespace std;

int main()
{
    int dijital = 0, numb,  chislo = 0, array[10] = {0};
    for(int number = 0; number < 10; number++)
    {
        cout << "array[" << dijital << "] = ";
        cin >> chislo;
        array[number] = chislo;
        dijital++;
    }
    cout << "Enter your number - ";
    cin >> numb;
        for(int number : array)
        {
            cout << number + numb << " ";
        }
    return 0;
}
