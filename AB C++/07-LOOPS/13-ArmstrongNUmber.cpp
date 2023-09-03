// 0, 1, 153, 370, 371, 407 are three-digit Armstrong numbers
#include <iostream>
using namespace std;
int main()
{
    int n, r, tempo, sum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    tempo = n;
    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        sum += (r * r * r);
    }
    if (tempo == sum)
    {
        cout << tempo << " is an Armstrong Number!" << endl;
    }
    else
    {
        cout << tempo << " is not an Armstrong NUmber!" << endl;
    }
    return 0;
}