#include <iostream>

using namespace std;

int main()
{
    int number = 0, dij = 0, num,  chi = 0, a[10] = {0};
    for(number = 0; number < 10; number++)
    {
        cout << "a[" << dij << "] = ";
        cin >> chi;
        a[number] = chi;
        dij++;
    }
    cout << "Enter your number - ";
    cin >> num;
        for(int number : a)
        {
            cout << number + num << " ";
        }
    return 0;
}
