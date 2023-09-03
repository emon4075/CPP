#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, r, rev = 0;

    // Prompt the user to enter a number
    cout << "Enter a Number: ";
    cin >> n;
    // Reverse the number
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    // Display the reversed number
    cout << "Entered Number in Words:";

    // Convert and print the reversed number into words
    while (rev != 0)
    {
        r = rev % 10;
        rev /= 10;
        switch (r)
        {
        case 0:
            cout << " Zero";
            break;
        case 1:
            cout << " One";
            break;
        case 2:
            cout << " Two";
            break;
        case 3:
            cout << " Three";
            break;
        case 4:
            cout << " Four";
            break;
        case 5:
            cout << " Five";
            break;
        case 6:
            cout << " Six";
            break;
        case 7:
            cout << " Seven";
            break;
        case 8:
            cout << " Eight";
            break;
        default:
            cout << " Nine";
            break;
        }
    }

    return 0;
}
