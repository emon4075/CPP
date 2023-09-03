#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0, tempo;
    cout << "Enter a Number: ";
    cin >> n;
    tempo = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << "Reversed Number is: " << rev << endl;
    if (tempo == rev)
    {
        cout << tempo << " is a Palindrome Number!" << endl;
    }
    else
    {

        cout << tempo << " is not a Palindrome Number!" << endl;
    }
    return 0;
}