#include <iostream>

using namespace std;

int main()
{
    int c;
    cout << "Enter your number - " << endl;
    cin >> c;
    for(int i = 0; i != c; i++ ){
        cout << i << ", ";
    }
    cout << c;
    return 0;
}
