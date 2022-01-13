#include <iostream>

using namespace std;

int main()
{
    char firstString[100] = {}, secondString[100] = {};
    int i = 0;
    bool initializer = true;
    cout << "Don't enter more than 100 symbols per string" << endl;
    cin.getline (firstString, 100);
    cin.getline (secondString, 100);
    while(firstString[i] != 0 && secondString[i] != 0 && initializer == true)
    {
        if(firstString[i] != secondString[i])
        {
            initializer = false;
        }
        i++;
    }
    if(initializer == false)
        cout << "Strings are not the same";
        else cout << "Strings are the same";
    return 0;
}
