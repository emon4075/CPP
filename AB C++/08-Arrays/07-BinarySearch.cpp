// Binary Search is more efficient than Linear search
// For Binary Search Elements Must be in sorted
#include <iostream>
using namespace std;
int main()
{
    int array[] = {3, 5, 7, 9, 12, 14, 18, 21, 23, 27, 32, 36, 38, 42, 45, 47, 50, 56, 59, 61, 64, 69, 70, 75, 78, 81, 84, 87, 92, 96}, low = 0, high = 30, mid, num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (num == array[mid])
        {
            cout << "Found at " << mid + 1 << endl;
            count++;
            break;
        }
        else if (num < array[mid])
        {
            high = mid - 1;
        }
        else if (num > array[mid])
        {
            low = mid + 1;
        }
    }
    if (count == 0)
    {
        cout << "Number not found!" << endl;
    }

    return 0;
}