
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Digits are: ";
    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        cout << r << " ";
        sum += r;
    }
    cout << "\nSum of the digits is: " << sum << endl;
    return 0;
}