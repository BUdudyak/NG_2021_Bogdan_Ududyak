#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your number: ";
    int  number;
    int sum;
    cin >> number;
    for(int a = number; a != 0; a /= 10 ){
        sum += a % 10;
    }
    cout << "Sum of your numers is: " << sum;
    return 0;
}
