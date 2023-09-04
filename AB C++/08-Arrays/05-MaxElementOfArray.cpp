#include <iostream>
using namespace std;
int main()
{
    int array[10];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Element at " << i << " index: ";
        cin >> array[i];
    }
    cout << "Elements are: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    cout << "Max of the elements: " << max << endl;
    return 0;
}