#include <iostream>

using namespace std;

int main()
{
    int fuel = 0;
    int yearlights;
    cout << "Enter starship weight in tones - ";
    cin >> fuel;
    fuel = fuel/3-2;
    cout << "About year-lights to travel - ";
    cin >> yearlights;
    fuel = fuel * yearlights;
    cout << "You need about " << fuel << " fuel in tones to travel 300 year-lights";
    return 0;
}
