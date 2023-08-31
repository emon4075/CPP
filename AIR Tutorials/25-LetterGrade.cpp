#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Obtained Number: ";
    cin >> num;
    if (num >= 80 && num <= 100)
    {
        cout << "Grade is: A+" << endl;
    }
    else if (num >= 70 && num < 80)
    {
        cout << "Grade is: A" << endl;
    }
    else if (num >= 60 && num < 70)
    {
        cout << "Grade is: A-" << endl;
    }
    else if (num >= 50 && num < 60)
    {
        cout << "Grade is: B" << endl;
    }
    else if (num >= 40 && num < 50)
    {
        cout << "Grade is: C" << endl;
    }
    else if (num >= 33 && num < 40)
    {
        cout << "Grade is: D" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
    return 0;
}