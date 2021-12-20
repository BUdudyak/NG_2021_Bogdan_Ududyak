#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number;
    cout << "Enter - ";
    cin >> number;
    int helper = -1;
    int chislo = 0;
    int suma = 0;
    for(int n = number; n > 0; n /= 10)
    {
        if(n % 2 == 0)
        {
            int lastNumber = n % 10;
            helper += 1;
            chislo += lastNumber * pow(10, helper);
            if(lastNumber % 3 == 0)
            {
                suma += lastNumber;
            }
        }
    }
    cout << "Odd numbers - " << chislo << endl << endl;
    cout << "Sum - " << suma;
    return 0;
}
