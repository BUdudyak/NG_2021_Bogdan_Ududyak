#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 20;
    b = b + a;   //b=20+50=70
    a = b - a;   //a=70-50=20
    b = b - a;   //b=70-20=50
    cout <<"a=" << a << endl;
    cout <<"b=" << b << endl;
    return 0;
}
