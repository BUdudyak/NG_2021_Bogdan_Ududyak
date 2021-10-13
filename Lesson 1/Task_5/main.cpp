#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Enter starship weight in tones ";
    cin >> a;
    a = a/3-2;
    cout << "You need about " << a << " fuel in tones to travel 300 year-lights";
    return 0;
}
