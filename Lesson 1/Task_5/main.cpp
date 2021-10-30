#include <iostream>

using namespace std;

int main()
{
    int fuel = 0;
    cout << "Enter starship weight in tones - ";
    cin >> fuel;
    fuel = (fuel/3-2)*300;
    cout << "You need about " << fuel << " fuel in tones to travel 300 year-lights";
    return 0;
}
