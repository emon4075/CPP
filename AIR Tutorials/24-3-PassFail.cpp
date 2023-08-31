#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Obained Number: " << endl;
    cin >> num;
    if (num >= 33 && num <= 100)
    {
        cout << "Passed" << endl;
    }
    else if (num > 100)
    {
        cout << "Cheater BSDK" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
    return 0;
}