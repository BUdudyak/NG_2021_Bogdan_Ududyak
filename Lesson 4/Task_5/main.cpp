#include <iostream>

using namespace std;

int main()
{
    char symbols[100]{}, star = '*';
    int k = 0;
    cout << "This is an anti-mat filter, input up to 100 characters" << endl;
    cin.getline(symbols, 100);
    while(symbols[k] != '\0')
    {
        if(symbols[k] == 'f' && symbols[k+1] == 'u' && symbols[k+2] == 'c' && symbols[k+3] == 'k')
        {symbols[k] = star; symbols[k+1] = star; symbols[k+2] = star; symbols[k+3] = star;}
        k++;
    }
    cout << symbols << endl;
    return 0;
}
