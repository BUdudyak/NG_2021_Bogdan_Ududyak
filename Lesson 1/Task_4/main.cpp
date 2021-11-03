#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    double D = 0;
    double x1 = 0;
    double x2 = 0;
    cout << "Enter numbers for ax^2+bx-c=0" << endl;
    cout << "Let's solve for this formula  ->  D=b^2-4ac"<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    D = b*b - 4*a*(-c);
    if  (D < 0)
        {
        cout << "there are no roots";
        }
    if (D > 0)
        {
        x1 = (-b + sqrt(D))/2*(-1);
        x2 = (-b - sqrt(D))/2*(-1);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
        }
    if  (D = 0)
        {
        x1 = (-b +sqrt(D))/2*(-1);
        cout << "x = " << x1;
        }
    return 0;
}
