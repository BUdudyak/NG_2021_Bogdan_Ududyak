#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    cout << "Enter your number - ";
    cin >> c;
    for(int i = 0; i != c; i++){
        cout << i << ", ";
    }
    cout << c;
    return 0;
}
