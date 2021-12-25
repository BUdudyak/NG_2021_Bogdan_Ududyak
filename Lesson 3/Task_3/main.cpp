#include <iostream>
#include <random>

using namespace std;

int main()
{
    int firstNumber = 0, secondNumber = 0, array1[4] = {-1}, array2[4] = {-1};
    for(int i = 0; i < 4; i++)
        array1[i] = rand() % 10;
    for(int n = 0; n < 4; n++)
        array2[n] = rand() % 10;
    firstNumber = array1[0]*1000 + array1[1]*100 + array1[2]*10 + array1[3];
    secondNumber = array2[0]*1000 + array2[1]*100 + array2[2]*10 + array2[3];
    cout << "First number = " << firstNumber << endl;
    cout << "Second number = " << secondNumber << endl << endl;
    cout << "Let's find sum of them" << endl << firstNumber + secondNumber;
    return 0;
}
