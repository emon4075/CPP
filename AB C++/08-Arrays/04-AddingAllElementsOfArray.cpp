#include <iostream>
using namespace std;
int main()
{
    int array[5] = {}, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        sum += array[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}