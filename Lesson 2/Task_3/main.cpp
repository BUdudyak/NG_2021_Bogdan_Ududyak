#include <iostream>

using namespace std;

int main()
{
    int l = 0;
    char symbol = '*';
    cin >> l;
    for (int t = 1; t <= l; t++)
        {
            if (t == 1 || t == l)
            {
                for (int t = 1; t <= l; t++)
                {
                    cout << symbol;
                }
            }
            else
            {
                cout << symbol;
                for (int t = 1; t <= l - 2; t++)
                {
                    cout << " ";
                }
            cout << symbol;
            }
        cout << endl;
        }
    cout << endl;
    return 0;
}
