#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    if (num % 2 == 0 && num != 0)
    {
        cout << num << " is a Even Number." << endl;
    }
    else if (num % 2 != 0)
    {
        cout << num << " is a Odd Number." << endl;
    }
    else
    {
        cout << "Zero is not even nor odd" << endl;
    }

    return 0;
}