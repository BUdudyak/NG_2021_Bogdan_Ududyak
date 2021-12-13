#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number;
    cout << "Enter - ";
    cin >> number;
    int helper = -1;
    int sum = 0;
    int suma = 0;
    for(int n = number; n > 0; n /= 10)
    {
        if(n % 2 == 0)
        {
            helper += 1;
            sum += (n % 10) * pow(10, helper);
        }
    }
    for(int i = sum; i > 0; i /= 10)
    {
        if((i % 10)% 3 == 0)
        {
            suma += i % 10;
        }
    }
    cout << sum << endl;
    cout << "\nSum - " << suma;
    return 0;
}
