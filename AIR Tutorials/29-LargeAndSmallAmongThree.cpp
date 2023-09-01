#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Three Numbers: " << endl;
    cin >> a >> b >> c;

    if (a > b && a > c && b > c)
    {
        cout << a << " is the Largest!" << endl;
        cout << c << " is the Smallest!" << endl;
    }
    else if (b > a && b > c && c > a)
    {
        cout << b << " is the Largest!" << endl;
        cout << a << " is the Smallest!" << endl;
    }
    else
    {
        cout << c << " is the Largest!" << endl;

        if (a < b && a < c)
            cout << a << " is the Smallest!" << endl;
        else if (b < a && b < c)
            cout << b << " is the Smallest!" << endl;
        else
            cout << c << " is the Smallest!" << endl;
    }

    return 0;
}
