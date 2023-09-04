#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer array 'array' with 5 elements
    int array[] = {1, 2, 3, 4, 5};

    // Iterate through the 'array' using a for loop
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << array[i] << endl;
    }

    // Print a separator line
    cout << "-----------------------------" << endl;

    // Explain the usage of a for-each loop in modern C++
    cout << "Using for each loop: It is used in modern C++" << endl;

    // Declare and initialize another integer array 'array2' with 5 elements
    int array2[] = {3, 9, 1, 4, 5};

    // Iterate through 'array2' using a for-each loop
    for (int x : array2)
    {
        cout << x << endl;
    }

    // Print a message for the next section
    cout << "Float type array using for each loop" << endl;

    // Declare and initialize a float array 'f' with 5 elements
    float f[] = {2.1, 2.3, 6.7, 7, 8};

    // Iterate through 'f' using a for-each loop
    for (float x : f)
    {
        cout << x << endl;
    }

    // Print a message for the next section
    cout << "Using auto in for each loop" << endl;

    // Declare and initialize a double array 'db' with 3 elements
    double db[] = {2.4, 7, 8.9};

    // Iterate through 'db' using a for-each loop with 'auto' keyword
    for (auto x : db)
    {
        cout << x << endl;
    }

    // Print a message for the final section
    cout << "Character type using for each loop with auto" << endl;

    // Declare and initialize a character array 'ch' with 4 elements
    char ch[] = {65, 'B', 'C', 68}; // 65 is the ASCII Code for 'A'

    // Iterate through 'ch' using a for-each loop with 'auto' keyword
    for (auto x : ch)
    {
        cout << x << endl;
    }

    return 0;
}
