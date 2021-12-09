#include <iostream>

using namespace std;

int main() {
    int number = 0;
    char chtoto[100];
    cout << "Enter no more than 100 simbols" << endl;
    cin.getline(chtoto, 100);
    int i = 0;
    while(chtoto[i] != '\0')
    {
        if(   chtoto[i] == '.'
           || chtoto[i] == ','
           || chtoto[i] == '!'
           || chtoto[i] == '?'
           || chtoto[i] == ';'
           || chtoto[i] == ':'
           || chtoto[i] == '-'
           || chtoto[i] == '"')
        {
            number++;
        }
        i++;
    }
    cout << number;
    return 0;
}
