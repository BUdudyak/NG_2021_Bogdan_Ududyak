#include <iostream>

using namespace std;

void function1(int size, int k)
{
    if(size > k)
    {
        cout << "*";
        function1(size, k+1);
    }
}

int n = 0;
void function2(int size, int k)
{
    if(k == 0)
    {
        cout << "*";
        function2(size, k+2);
    }
    if(size > k && k != 0)
    {
        cout << " ";
        function2(size, k+1);
    }
    if(k == size)
    {
        cout << "*" << endl;
        n++;
    }
    if(n + 2 != size)
    {
        function2(size, 0);
    }
}

int main()
{
    int firstNumber = 0;
    cin >> firstNumber;
    function1(firstNumber, 0);
    cout << endl;
    if(firstNumber > 2)
     function2(firstNumber, 0);
    if(firstNumber > 1)
     function1(firstNumber, 0);
    return 0;
}
