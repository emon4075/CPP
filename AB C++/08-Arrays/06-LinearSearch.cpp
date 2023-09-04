#include <iostream>
using namespace std;
int main()
{
    int array[] = {56, 23, 87, 42, 69, 14, 32, 75, 9, 64, 18, 50, 96, 7, 38, 81, 3, 61, 27, 92, 5, 47, 70, 12, 45, 78, 21, 59, 36, 84};
    int num, count = 0;
    cout << "Enter the number that you want ot search: ";
    cin >> num;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        if (num == array[i])
        {
            cout << "Number found at " << i + 1 << endl;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Number not found!" << endl;
    }

    return 0;
}