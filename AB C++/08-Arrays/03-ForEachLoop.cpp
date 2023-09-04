#include <iostream>
using namespace std;

int main()
{
    int A[5];

    // Use a reference (&) to modify the elements while reading input
    // Process of taking input and showing output using for-each loop
    for (auto &x : A)
    {
        cin >> x;
    }

    for (auto x : A)
    {
        cout << x << endl;
    }
    // Showing elements of an array using the for-each loop
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    int array[5] = {1, 2, 3, 4, 5};
    for (int y : array)
    {
        cout << y << endl;
    }

    return 0;
}
