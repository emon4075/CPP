#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter Two Numbers: " << endl;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is larger than " << n2 << endl;
    }
    else if (n2 > n1)
    {
        cout << n2 << " is larger than " << n1 << endl;
    }
    else
    {
        cout << "Numbers are equal" << endl;
    }
    return 0;
}