#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;
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
    return 0;
}