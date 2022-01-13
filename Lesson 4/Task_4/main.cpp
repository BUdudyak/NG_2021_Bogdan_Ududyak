#include <iostream>

using namespace std;

int main()
{
    char sentence[100] = {};
    int hesh = 0, i = 0;
    bool word = false;
    cout << "Hi, can you enter 1 sentence? *But symbols must be less than 100 :)*" << endl;
    cin.getline(sentence, 100);
    while(sentence[i] != '\0')
    {
        if(sentence[i] >= 'a' && sentence[i] <= 'z' || sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            if(sentence[i] == 'a' || sentence[i] == 'A' ||
               sentence[i] == 'i' || sentence[i] == 'I' ||
               sentence[i] == 'e' || sentence[i] == 'E' ||
               sentence[i] == 'o' || sentence[i] == 'O' ||
               sentence[i] == 'y' || sentence[i] == 'Y' ||
               sentence[i] == 'u' || sentence[i] == 'U')
                hesh++;
                word = true;
        }
        else
        {
            if(sentence[i] != '\0')
                cout << hesh;
            hesh = 0;
            word = false;
        }
        i++;
    }
    if(word == true)
        cout << hesh;
    return 0;
}
