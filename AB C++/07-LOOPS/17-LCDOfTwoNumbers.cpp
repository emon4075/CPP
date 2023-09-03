#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;
    x = a;
    y = b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else if (b > a)
        {
            b -= a;
        }
    }
    cout << "GCD is " << a << endl;
    cout << "LCD is " << (x * y) / a << endl;
    return 0;
}